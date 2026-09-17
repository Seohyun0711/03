#include <stdio.h>

int main(void)
{
    float a;
    float b;
    float result;

    printf("분자를 입력 : ");
    scanf("%f", &a);

    printf("분모를 입력: ");
    scanf("%f", &b);

    result = a / b;

    printf("나누기의 결과는 %f 입니다.\n", result);

    return 0;
}