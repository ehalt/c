#include<stdio.h>
int main()
{
    int num1, num2, value;
    char sign;
    printf("Please enter a number for add:");
    scanf("%d", &num1);
    printf("please enter another number for add:");
    scanf("%d", &num2);
    value = num1 + num2;
    sign = '+';
    printf("The value of add is: %d %c %d = %d\n", num1,sign,num2,value);

    /*===============/ substraction /================*/
    printf("please enter a number for sub: ");
    scanf("%d", &num1);
    printf("please enter a number for sub:");
    scanf("%d", &num2);
    value = num1 - num2;
    sign = '-';
    printf("The value of those number is: %d %c %d = %d\n", num1, sign, num2, value);

    /* Multiplication */

    printf("please enter a number for mul:");
    scanf("%d", &num1);
    printf("please enter another number for mul:");
    scanf("%d",&num2);
    value = num1 * num2;
    sign = '*';
    printf("The value of those number is: %d %c %d = %d\n", num1, sign, num2, value);
    return 0;

}
