#include<stdio.h>
int main()
{
    char name;
    printf("Enter your name here:");
    scanf("%c", &name);
    if(name == 'torikus'){
        printf("Welcome here, boss!");
    }
    else{
        printf("dur ho eti theke.");
    }
    return 0;
}
