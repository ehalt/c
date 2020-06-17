#include<stdio.h>
int main()
{
    int a = 10,b;

    b = a; //here b = 10
    printf("b = %d\n", b);

    b += a; //here b = 20
    printf("b = %d\n", b);

    b -= a; //here b = 10
    printf("b = %d", b);

    b *= a;
    printf("b = %d\n", b);

    b /= a;
    printf("b = %d\n", b);

    return 0;

}
