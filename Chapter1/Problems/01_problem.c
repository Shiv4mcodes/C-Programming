//Find out area of a Rect. by taking parameters from the user

#include <stdio.h>

int main() {
    int length , width , area;    //using int as area will be in whole number

    printf("Enter the length of the Rectangle: ");
    scanf("%d" , &length);                         //using & to store value at address of variable
    
    printf("Enter the width of the Rectangle: ");
    scanf("%d" , &width);

    area = length * width;
    printf("The Area of the Rectangle is %d" , area);
    return 0;
}