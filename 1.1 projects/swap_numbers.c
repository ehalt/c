
// Swap numbers using temp variable;

#include<stdio.h>
int main()
{

    double first, second, temp;
    printf("Enter the first number: ");
    scanf("%lf", &first);
    printf("Enter the second number: ");
    scanf("%lf", &second);

    //value of first is assigned to temp
    temp = first;

    //value of second is assigned to first

    first = second;

    //value of temp (initial value of first)

    second = temp;

    printf("\n After swapping, first number = %0.2lf", first);
    printf("\n After swapping second number = %0.2lf", second);
    return 0;
}
