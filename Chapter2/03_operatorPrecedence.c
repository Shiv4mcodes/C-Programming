#include <stdio.h>

int main(){
    int a = 10 , b = 20 , c = 30;
    printf("The value  is  %d" , a*b/c); //Here * and / have same precedence so they are evaluated from left to right
    printf("\nThe value  is  %d" , a+b/c); //Here / has more precedence than + so it is evaluated first and then + is evaluated
    printf("\nThe value  is  %d" , (a+b)/c); //Here brackets have more precedence so a+b is evaluated first and then / is evaluated
    printf("\nThe value  is  %d" , a*b+c); //Here * has more precedence than + so it is evaluated first and then + is evaluated
    printf("\nThe value is %d", (3*a+2*b)/7); //Here brackets have more precedence so 3*a+2*b is evaluated first and then / is evaluated
                                            //(3a+2b)/7 = (30+40)/7 = 70/7 = 10
    return 0;
}