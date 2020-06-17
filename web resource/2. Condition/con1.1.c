#include<stdio.h>
int main()
{
    int number;
    printf("Please enter an Integer number: ");
    scanf("%d", &number);
    if(number > 10 ) {
        printf("You entered %d and %d is a true number.\n", number);
    }
    else{
        printf("Number is wrong.");
    }
    return 0;
}
