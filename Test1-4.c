#include <stdio.h>
int main()
{
    double a;
    double b;
    double c;
    double sum;
    printf("3개의 실수를 입력하시오: ");
    scanf("%lf %lf %lf",&a, &b,&c);
    sum=a+b+c;
    printf("합계=%.2lf",sum);
    printf("평균=%.2lf",sum/3);

    return 0;
}