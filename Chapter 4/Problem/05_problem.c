//Write a program to calculate the sum of the numbers occurring in the multiplication table of 9
#include <stdio.h>

int main(){
    int n ;
    int sum = 0;
    printf("Enter the number: ");
    scanf("%d" , &n);

    for (int i = 0; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n , i , n*i);
        sum += n*i;
    }
    printf("The value of sum is %d" , sum);
    
    return 0;
}

