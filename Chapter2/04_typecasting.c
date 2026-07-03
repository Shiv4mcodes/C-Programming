//Typecasting in C means converting a variable from one form to another form. ig- int to float, float to int etc.

#include <stdio.h>

int main(){
    int a = 45; //declaration and initialization of a
    float b = 64.67;

    int c = (int) b; //typecasting float b to int and storing it in c //not clear revise
    printf("The value of c is %d" , c); //c will store only the integer part of b
    
    return 0;
}