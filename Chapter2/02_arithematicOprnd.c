//Arithematic instructions
#include <stdio.h>

int main(){
    int a = 5; //declaration and initialization of a
    int b = 9;
    int c = 9;
    int d = a + b + c; //arthematic operation 5+4-6 = 3
    printf("Sum of a b c is %d" , d);

    int x = 10;
    float y = 3;
    float z = x / y; //division operation
    printf("\nDivision of x by y is %.2f" , z); //10/3 , here we are getting quotient
 
    //modular operator returns the remainder , cannot be used with float values , sign same as of numerator (if used with negative numbers)
    int k = 27;
    int l = 3;
    int m = k % l; //In order to get the remainder we use modular arithematic operand 
    printf("\nThe value of the remainder after dividing K/L is %d" , m); 

    return 0;

}