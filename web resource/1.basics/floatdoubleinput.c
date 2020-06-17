#include<stdio.h>
int main()
{
    float num1;
    double num2;

    printf("Please enter a number: ");
    scanf("%f", &num1);

    printf("please enter another number:");
    scanf("%lf", &num2);

    printf("num1 = %f\n", num1);
    printf("num2 = %lf\n", num2);

    return 0;
}
