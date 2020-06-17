// problem - 3
//just need to give 0 input
#include<stdio.h>
int main()
{
    //num1 = n1
    //num2 = n2
    int n1, n2;
    printf("Enter your first number: ");
    scanf("%d", &n1);
    printf("Enter your second number:");
    scanf("%d", &n2);
    //===========/ for add /=============//
    int add;
    add = n1 + n2;
    printf("Add : %d + %d = %d\n", n1,n2,add);
    // for sub
    int sub;
    sub = n1 - n2;
    printf("sub: %d - %d = %d\n", n1,n2,sub);
    //for mul
    int mul;
    mul = n1 * n2;
    printf("Mul: %d * %d = %d\n", n1,n2,mul);
    //for div
    int div;
    div = n1 % n2;
    printf("Div: %d / %d = %d\n", n1,n2,div);

    return 0;
}
