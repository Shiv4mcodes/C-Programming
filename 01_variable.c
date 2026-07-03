//Types of Instruction
//type declaration, arithematic instructions , control instructions
#include <stdio.h>

int main(){
    int i = 10; //declaration of i and initialization of i with 10
    int j = i;  //declaration of j and initialization of j with value of i
    int a = 2 , b = 3 , c = 4; 
    printf("The value of i is %d and value of j is %d" , i , j); //%d is format specifier for integer %f is for float %c is for character
    printf("\nThe value of a is %d , b is %d and c is %d" , a , b , c);
    return 0;
}