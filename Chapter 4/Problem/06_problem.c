//write the program to find the factorial of a number using for loop
#include <stdio.h>
int main(){
    int n=4;
    int product = 1;

    for (int i = 1; i <= n; i++){
        product *=i;
    }
    printf("The value of product is %d" , product);
    
    return 0;
}

//write the factorial of the number using while loop
#include <stdio.h>
int main(){
    int n=5;
    int i = 1;
    int product = 1;

    while (i<=n)
    {
      product *= i;
      i++;
    }
    {
        printf("The value of product is %d" , product);   
    }
    
    return 0;
}

