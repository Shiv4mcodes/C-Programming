   //Taking input from user to find the greater number

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter the two numbers: ");
    scanf("%d %d", &num1, &num2); //"&" is the 'Address' of the operator and it means that the supplied value should be copied to the address which is indicated by variable num1 and num 2.- 

    if (num1 == num2) 
        printf("Both the numbers are equal\n");
    
    else if (num1 > num2) 
        printf("Num1 is Greater\n");
    
    else {
        printf("Num2 is Greater\n");
    }

    return 0;
}
