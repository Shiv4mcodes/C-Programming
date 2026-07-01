//Write a program to convert celsius to fahrenheit

#include <stdio.h>

int main(){
    float celsius , fahrenheit , TEMPERATURE;
    printf("Enter the temperature in C: ");
    scanf("%f" , &celsius);

    TEMPERATURE = celsius * 9/5 + 32;

    printf("Temperature in fahrenheit is %.2f" , TEMPERATURE);
    
    return 0;
}