#include<stdio.h>
int main()
{
    int n = 10;
    //printf("please enter a number to check negative or positive or zero?: ");
    //scanf("%d", &n);
    if(n < 0){
        printf("The number is negative\n");
    }
    else if( n > 0){
        printf("The number is positive\n");
    }
    else if(n == 0){
        printf("The number is zero hah!");
    }
    return 0;
}
