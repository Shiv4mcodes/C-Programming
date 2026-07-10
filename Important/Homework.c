//1 Write a program in C to add two numbers.
//2	write the code to find ascii value of character.
//3	Write a program in C to computer and print Quotient and Remainder.
//4	Write a program in C to find the size of int, float, double and char.
//5	Write a program in C to swap the value of two numbers.
//6	Write a program in C to convert Celsius into Fahrenheit and vice versa.
//7	Write a program in C to calculate and print the value of Simple interest and Compound interest.


#include <stdio.h>

int main(){
    int a, b, sum;- e of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    sum = a + b;
    printf("The Sum of a and b is %d\n", sum);
    return 0;
}


//	Write a program in C to computer and print Quotient and Remainder.

#include <stdio.h>

int main(){
    int x = 10;
    float y = 2;
    float z = x / y; //This will print quotient 
    printf ("\nQuotient is %.2f" , &z);

    return 0;
}

#include <stdio.h>

int main(){
    int x = 5;
    int y = 12;
    int z = x % y; //This is return the remainder 
    printf("\nRemainder is %d" ,&z);

    return 0;
}




//4	Write a program in C to find the size of int, float, double and char.

#include <stdio.h>

int main(){
    printf("Size of int:    %zu byte(s)\n", sizeof(int));   //%zu is a format specifier usedf with prinf and size_t / sizeof 
    printf("Size of float:  %zu byte(s)\n", sizeof(float));
    printf("Size of double: %zu byte(s)\n", sizeof(double));
    printf("Size of char:   %zu byte(s)\n", sizeof(char));
    return 0;
}

//5	Write a program in C to swap the value of two numbers

#include <stdio.h>

int main(){
    int a , b , temp;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a , &b);
    temp = a; 
    a = b;
    b = temp;
    printf("After Swapping the value of a is %d and b is %d " , a , b); 

    return 0;
}

//6	Write a program in C to convert Celsius into Fahrenheit and vice versa.

int main(){
    float celsius , fahrenheit , TEMPERATURE , Temperature;
    printf("Enter the temperature in C: ");
    scanf("%f" , &celsius);

    TEMPERATURE = celsius * 9/5 + 32;

    printf("Temperature in fahrenheit is %.2f" , TEMPERATURE);

    printf("Enter the temperatur in F: ");
    scanf("%f" , &fahrenheit);

    Temperature = (fahrenheit - 32) * 5/9;

    printf("Temperature in Celsius is %.2f" , Temperature);
    
    return 0;
}


//write the code to find ascii value of character.

#include <stdio.h>

int main(void){
    char ch;
    printf("Enter a character: ");
    if (scanf(" %c", &ch) != 1) return 1;    // leading space skips whitespace
    printf("ASCII value of '%c' is %d\n", ch, (unsigned char)ch);
    return 0;
}


//Write a program in C to calculate and print the value of Simple interest and Compound interest.

