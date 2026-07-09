//write the program to sum of first 10 natural numbers
//using while loop
#include <stdio.h>

int main(){
    int i = 1;
    int sum = 0;
    while (i <= 10)
    {
        sum += i;
        i++;
    }

    printf("The value after adding all 10 natural numbers is %d", sum);
    
    return 0;
}

//Add first ten digit by using (for) loop 
#include <stdio.h>

int main(){
    int i = 1;
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;

    }
    printf("The value by adding first 10 nattural numbers is %d" , sum);
    
    return 0;
}

// Using do while loop

#include <stdio.h>

int main(){
    int i = 1;
    int sum = 0;
    do
    {
        sum += i;
        i++;
    } while (i <= 10);

    printf("The value is %d" , sum);
    
    return 0;
}