#include<stdio.h>
// # =  pre  porcessor .
int main()
//int = integer uses of decimal number;
// main()  function
{
    int n = 0;
    while( n < 10){
        n = n + 1;
        if (n % 2 == 0){
            continue;
        }
        printf("%d\n", n);
    }
    return  0;
}

// done huh!
