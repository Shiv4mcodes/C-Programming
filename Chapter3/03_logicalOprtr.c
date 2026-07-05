//Logical Operators in C
//They are used to evaluate conditions (true or false)inside the if statements. 
// == ( Equal to) , != (Not equal to) , > , < , >= (Greater than equal to) , <= (Smaller than equal to)

#include <stdio.h>

int main(){
    int a=0 , b=1;
    printf("the value of a and b is %d\n", a&&b); //Logical AND operator it returns true if both the operands are true
    printf("the value of a or b is %d\n", a||b); //Logical OR operator it returns true if at least one of the operands is true
    printf("the value of not(a) is %d\n", !a); //Logical NOT operator it returns true if the operand is false and vice versa , it changes the value of a to b and b to a 
    return 0;
}