#include <stdio.h>

int main()
{
    char name[256];
    printf("�̸��� ������? ");
    scanf("%s", name);

    int age;
    printf("����̿���?");
    scanf("%d", &age);

    float weight;
    printf("�����Դ� �� kg�̿���? ");
    scanf("%f", &weight);

    char what[256];
    printf("���� ���˸� ���������? ");
    scanf("%s", what);

    //���� ���� ���
    printf("\n\n ---- ������ ���� ----\n\n");
    printf("�̸�     : %s\n", name);
    printf("����     : %d\n", age);
    printf("������   : %.2f\n", weight);
    printf("���˳���  : %s\n", what);
    printf("\n\n ------------------\n\n");
}