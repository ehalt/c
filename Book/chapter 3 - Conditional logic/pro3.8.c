#include<stdio.h>
int main()
{
    int num, remainder;
    printf("Enter a number to check even or odd: ");
    scanf("%d", &num);
    remainder = num % 2;
    //now condition
    if (remainder == 0){
        printf("The number is even");
    }
    else{
        printf("The number is odd");
    }
    return 0;
}
//Alhamdulillah done!
