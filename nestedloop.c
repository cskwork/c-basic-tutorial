#include <stdio.h>

int main()
{

/*

//기본 이론
for(int i=1 ; i<=3; i++){
    printf("첫 번째 반복 : %d\n", i);
    for(int j=1; j<=5; j++){
        printf(" 두 번째 반복문: %d\n", j);
    }
}*/

//구구단
for(int i=1 ; i<=9; i++){
    printf("%d 계산 \n", i);
    for(int j=1; j<=10; j++){
        printf(" %d x %d = %d\n", i, j, i*j);
    }
}

}