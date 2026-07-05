#include <stdio.h>

int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d" , &age);

    if (age>=60) 
    {
        printf("You are senior citizen be carefull while driving");
    }
    else if (age>=18)
    {
        printf("You are 18+ , you can drive");
    }
    else
    {
        printf("You aren't even 18 , you can't drive");
    }
    
    return 0;
}