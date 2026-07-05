#include <stdio.h>

int main(){
    int a;
    printf("Enter the value of a: ");
    scanf("%d" , &a);

    switch (a) {
        case 1:
        printf("You entered the value 1");
        break;
    }

    switch (a)
    {
    case 2:
        printf("You entered the value 2");
        break;
    }

    switch (a)
    {
    case 3:
        printf("You entered the value 3");
        break;
    }

    switch (a)
    {
    case 4:
        printf("You entered the value 4");
        break;
    }

    return 0;
}