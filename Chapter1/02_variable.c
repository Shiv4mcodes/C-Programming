// Rules for Defining Variables
//Variable names can contain letters, numbers, and underscores.
//Variable names must start with a letter or underscore, not a number.
//Variable names must not be reserved C keywords.
//Each variable definition ends with a semicolon.
// Variable - A variable definition in C sets aside memory for a value, and gives it a name for use in the program.

#include<stdio.h>

int main()
{
    int shivam; // Variable can be different types which can be stored
    shivam = 5; 
    int lava; // Should always end with semicolon
    lava = 6; 
    int rage;
    rage = 2;
    int SHIVAM; // Small case & upper case in C are different not same
    SHIVAM = 7;
    int shivam_23; // Underscored can be include but not SPACES in b/w
    shivam_23 = 9;
    int a; // Variable declaration
    a = 8; // Variable initialization
    printf("%d", a + shivam + shivam_23 + SHIVAM); //adding them 
    return 0;
}