#include<stdio.h>
int main()
{
    int num1, num2, value;
    char sign;
    printf("please Enter your first number: ");
    scanf("%d", &num1);
    printf("please Enter your second number: ");
    scanf("%d", &num2);
    value = num1 + num2;
    sign = '+';
    printf("Jogfol : %d %c %d = %d\n", num1, sign, num2, value);
    value = num1 - num2;
    sign = '-';
    printf("Biyogfol: %d %c %d = %d\n", num1, sign, num2, value);
    value = num1 * num2;
    sign = '*';
    printf("Gunfol: %d %c %d = %d\n", num1, sign, num2, value);
    value = num1 / num2;
    sign = '/';
    printf("Vagfol: %d %c %d = %d\n", num1, sign, num2, value);
    return 0;
}
