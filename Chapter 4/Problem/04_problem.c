//Write a program to calculate the sum of the numbers occurring in the multiplication table of 8
#include <stdio.h>

int main(){
    int n;
    int sum = 0;
    printf("Enter the number: ");
    scanf("%d" , &n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n , i , n*i);
        sum += n*i;
    }
     printf("The value is %d" , sum);
    return 0;
}
//OUTPUT -
   //Enter the number: 8
        //8 X 1 = 8
        //8 X 2 = 16
        //8 X 3 = 24
        //8 X 4 = 32
        //8 X 5 = 40
        //8 X 6 = 48
        //8 X 7 = 56
        //8 X 8 = 64
        //8 X 9 = 72
        //8 X 10 = 80
        //The value is 440