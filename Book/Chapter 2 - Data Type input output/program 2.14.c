#include<stdio.h>
int main()
{
    int num1, num2;
    printf("please enter a number: ");
    scanf("%d", &num1);
    printf("please enter another number:");
    scanf("%d", &num2);
    printf("Add : %d + %d = %d\n", num1, num2, num1 + num2 );
    //here %d = num1, + is just show %d = num2 = sign is just shown for result i write num1+num2
    printf(" sub : %d - %d = %d\n", num1, num2, num1 - num2);
    // for minus result
    printf("Mul: %d * %d = %d\n", num1, num2, num1*num2);
    // for multiplication
    printf("Div: %d / %d = %d\n", num1, num2, num1 % num2);
    return 0;
}
