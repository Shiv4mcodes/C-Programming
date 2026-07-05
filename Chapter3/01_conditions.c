#include <stdio.h>

int main()
{
    float age;
    printf("Enter your age: ");
    scanf("%f", &age);

    if (age >= 18.0)
    {                                                         
        printf("You are elegible to vote");
    }
    else {
        printf("You should be 18 years in order to vote");
    }

    return 0;
}