#include <stdio.h>

/*
++b, b++ 의 차이 

*/
int main()
{

//++ 1씩 추가 
int a = 10;
printf("a 는 %d\n", a);
a++;
printf("a 는 %d\n", a);
a++;
printf("a 는 %d\n", a);

printf("\n");

int b = 10;
printf("b 는 %d\n", ++b); //++b 은 바로 +1을 함. 
printf("b 는 %d\n", b);
printf("b 는 %d\n", b++); //다음 줄에 넘어갈 때 +1을함
printf("b 는 %d\n", b);

printf("\n");

int c=1;
printf("Hello World %d\n", c++);//n++ 추가 예제
printf("Hello World %d\n", c++);

printf("\n");

//반복문
//for, while, do while

//for
for(int i=1; i<=10; i++){
    printf("Hello World %d\n", i);
}

//while
int i=1;
while( i<=10 ){
   printf("Hello World %d\n", i++);
}

printf("\n");

//do while
int j=1;
do{
    printf("Hello World %d\n", j++); //execute at least once
} while( j<=0 );






}