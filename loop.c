#include <stdio.h>

/*
++b, b++ �� ���� 

*/
int main()
{

//++ 1�� �߰� 
int a = 10;
printf("a �� %d\n", a);
a++;
printf("a �� %d\n", a);
a++;
printf("a �� %d\n", a);

printf("\n");

int b = 10;
printf("b �� %d\n", ++b); //++b �� �ٷ� +1�� ��. 
printf("b �� %d\n", b);
printf("b �� %d\n", b++); //���� �ٿ� �Ѿ �� +1����
printf("b �� %d\n", b);

printf("\n");

int c=1;
printf("Hello World %d\n", c++);//n++ �߰� ����
printf("Hello World %d\n", c++);

printf("\n");

//�ݺ���
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