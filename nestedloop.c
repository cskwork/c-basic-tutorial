#include <stdio.h>

int main()
{

/*

//�⺻ �̷�
for(int i=1 ; i<=3; i++){
    printf("ù ��° �ݺ� : %d\n", i);
    for(int j=1; j<=5; j++){
        printf(" �� ��° �ݺ���: %d\n", j);
    }
}*/

//������
for(int i=1 ; i<=9; i++){
    printf("%d ��� \n", i);
    for(int j=1; j<=10; j++){
        printf(" %d x %d = %d\n", i, j, i*j);
    }
}

}