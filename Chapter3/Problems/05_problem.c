//Greatest of 4 number enterred by the user

#include <stdio.h>

int main(){
    int a , b , c , d;
    printf("Enter the value of a: \n");
    scanf("%d" , &a);

    printf("Enter the value of b: \n");
    scanf("%d" , &b);

    printf("Enter the value of c: \n");
    scanf("%d" , &c);

    printf("Enter the value of d: \n");
    scanf("%d" , &d);

    if ((a>b) && (a>c) && (a>d))
    {
        printf("\nA is greatest in all");
    }

    if ((b>a) && (b>c) && (b>d))
    {
        printf("\nB is greatest in all");
    }

    if ((c>a) && (c>b) && (c>d))
    {
        printf("\nC is greatest in all");
    }

    if ((d>a) && (d>b) && (d>c))
    {
        printf("\nD is greatest in all");
    }
    
    return 0;
}