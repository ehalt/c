#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character that you want: ");
    scanf("%c", &c);

    //here %d displays the integer value
    // and %c displays the actual character :)

    printf("ASCII value of %c is: %d.", c,c);

    return 0;

}
