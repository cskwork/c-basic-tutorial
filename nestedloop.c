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

//��Ƽ �ּ��� Ctrl + k + c
//������ 
// for(int i=1 ; i<=9; i++){
//     printf("%d ��� \n", i);
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