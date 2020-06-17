
/* ==================> multiplication 2 floating number <=================== */

#include<stdio.h>
int main()

{
    float a, b, sum;
    printf("Enter your first mul num:\n ");
    scanf("%f", &a);
    printf("Enter your second mul num:\n ");
    scanf("%f", &b);
    sum = a * b ;
    printf("The result of %0.2f and %0.2f = %f", a, b, sum);
    return 0;
}
