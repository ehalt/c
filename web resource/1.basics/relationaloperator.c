
#include<stdio.h>
int main()

{
    char a,b,c;

    printf("Enter your first name here:\n ");
    scanf("%c", &a);
    printf("Enter you last name here:\n ");
    scanf("%c", &b);
    c = a == b;
    if( c ){
        printf("True name dude!\n");
    }
    else{
        printf("Who are you dude?");
    }
}
