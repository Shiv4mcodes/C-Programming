//Take input from user to find simple interest

#include <stdio.h>

int main(){
    float principal , time , rate , SI , TotalAmount; //using float to store decimal values
    
    printf("Enter principal value: ");
    scanf("%f" , &principal);

    printf("Enter rate of intrest: ");
    scanf("%f" , &rate);

    printf("Enter the time(in years): ");
    scanf("%f" , &time);

    SI = (principal * rate * time) / 100;         //Formula for simple interest
    printf("The Simple Interest is %.2f" , SI);   //using .2f to print only 2 decimal places

    TotalAmount = (principal + SI);
    printf("\nThe total amount is %.2f" , TotalAmount); //using \n for new line

    return 0;
}  
