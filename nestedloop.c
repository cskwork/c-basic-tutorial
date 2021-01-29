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

//멀티 주석은 Ctrl + k + c
//구구단 
// for(int i=1 ; i<=9; i++){
//     printf("%d 계산 \n", i);
//     for(int j=1; j<=10; j++){
//         printf(" %d x %d = %d\n", i, j, i*j);
//     }
// }



//Repeat 2X
for(int i=0; i < 2; i++){

    //Pyramid asc
    for(int i=1; i<6 ; i++){
        printf("\n");
        for(int j=0 ; j<i; j++){ //0<1 , 1<1 /  0<2 , 1<2, 2<2 
            printf("*");
        }
    };

    //Pyramid desc
    for(int i=5; i > 0 ; i--){
        printf("\n");
        for(int j = 0 ; j < i; j++){ // 0 < 6 , 5 
            printf("*");
        }
    };

}


}