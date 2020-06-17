// same problem just need to double.

#include<stdio.h>
int main()
{
    //num1 = n1
    //num2 = n2
    double n1, n2;
    printf("Enter your first number: ");
    scanf("%lf", &n1);
    printf("Enter your second number:");
    scanf("%lf", &n2);
    //===========/ for add /=============//
    double add;
    add = n1 + n2;
    printf("Add : %lf + %lf = %lf\n", n1,n2,add);
    // for sub
    double sub;
    sub = n1 - n2;
    printf("sub: %lf - %lf = %lf\n", n1,n2,sub);
    //for mul
    double mul;
    mul = n1 * n2;
    printf("Mul: %lf * %lf = %lf\n", n1,n2,mul);
    //for div
    double div;
    div = n1 / n2;
    // in the case of double i can't use '%' operator
    printf("Div: %lf / %lf = %lf\n", n1,n2,div);

    return 0;
}
