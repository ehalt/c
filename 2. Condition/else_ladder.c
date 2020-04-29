#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    //check if the two integers are equal
    if(num1 == num2){
        printf("Result: %d = %d", num1, num2);
    }

    // check if num1 is greater than num2

    else if (num1 < num2){
        printf("Result: %d > %d", num1, num2);
    }

    // check if both test expressions are false

    else{
        printf("Resul : %d < %d", num1, num2);
    }
    return 0;
}
