from pathlib import Path
import argparse,subprocess,tempfile,os,json
parser=argparse.ArgumentParser();parser.add_argument('--source',type=Path,default=Path(__file__).with_name('prinfscanf.c'));parser.add_argument('--baseline',action='store_true');args=parser.parse_args();cases={'ordinary':b'Sample\n25\n70.25\nexample\n','oversized_name':b'B'*700+b'\n25\n70.25\nexample\n','oversized_what':b'Sample\n25\n70.25\n'+b'B'*700+b'\n'};results={}
with tempfile.TemporaryDirectory(prefix='c-input-security-') as td:
 exe=Path(td)/'demo';compile_result=subprocess.run(['clang','-fsanitize=address','-fno-omit-frame-pointer','-O1','-g',str(args.source),'-o',str(exe)],capture_output=True);assert compile_result.returncode==0,'C compilation failed; diagnostic stored only by caller'
 env=dict(os.environ,ASAN_OPTIONS='detect_leaks=0:exitcode=99:disable_coredump=1')
 if not args.baseline:cases.update({'invalid_age':b'Sample\nnot-number\n70.25\nexample\n','EOF':b''})
 for name,data in cases.items():
  r=subprocess.run([str(exe)],input=data,capture_output=True,env=env,timeout=5);safe=b'ERROR: AddressSanitizer' not in r.stderr and r.returncode in [0,1];ordinary=(r.returncode==0 and b'Sample' in r.stdout and b'70.25' in r.stdout and b'example' in r.stdout) if name=='ordinary' else True;invalid=(r.returncode==1) if name in ['invalid_age','EOF'] else True;results[name]={'exit':r.returncode,'memory_safe':safe,'ordinary_values_preserved':ordinary,'failed_input_rejected':invalid,'pass':safe and ordinary and invalid}
print(json.dumps({'source':str(args.source),'baseline':args.baseline,'cases':results,'compiler_exit':compile_result.returncode,'program_inputs':'synthetic only; no files/providers/DB','asan':True},indent=2));raise SystemExit(0 if all(x['pass'] for x in results.values()) else 1)
