#include<stdio.h>
int main()
{
    int num1, num2, value;
    printf("Enter your first integer number: " );
    scanf("%d", &num1);

    printf("Enter your second integer number: ");
    scanf("%d", &num2);

    value = num1 + num2;

    printf("The result of %d and %d is: %d", num1, num2, value);

    return 0;
}
