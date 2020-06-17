// just need to put [ + - * / ] into a char variable

#include<stdio.h>
int main()
{
    int n1, n2;
    printf("Enter your first number: ");
    scanf("%d", &n1);
    printf("Enter your second number: ");
    scanf("%d", &n2);
    char psign;
    psign = '+';
    int add;
    add = n1 + n2;
    printf("sum is: %d %c %d = %d\n", n1, psign, n2, add);
    // for sub
    char ssign;
    ssign = '-';
    int sub;
    sub = n1 - n2;
    printf("sum is: %d %c %d = %d\n", n1, ssign, n2, sub);
    //for mul
    char msign;
    msign = '*';
    int mul;
    mul = n1 * n2;
    printf("Mul : %d %c %d = %d\n",n1, msign, n2, mul);
    char dsign;
    dsign = '/';
    int div;
    div = n1 / n2;
    printf("Div: %d %c %d = %d\n", n1, dsign, n2, div);
    return 0;

}
// nije ja bujhi tai korlam jani na thik holo ki na :(n
