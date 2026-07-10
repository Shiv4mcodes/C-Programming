// Program: Grade evaluator - prints grade based on obtained marks
#include <stdio.h>

int main_grade_evaluator(void){
    int marks, obtmarks , percentage;
    printf("Enter the marks obtained: ");
    if (scanf("%d", &obtmarks) != 1) return 1;

    marks = 100;

    if (obtmarks>=90)
    {
        printf("O\n");
    } 
    else if (obtmarks>=80 && obtmarks<90)
    {
        printf("A+\n");
    }
    else if (obtmarks>=70 && obtmarks<80)
    {
        printf("A\n");
    }
    else if (obtmarks>=60 && obtmarks<70)
    {
        printf("B+\n");
    }
    else if (obtmarks>=50 && obtmarks<60)
    {
        printf("B\n");
    }
    else if (obtmarks>=40 && obtmarks<50)
    {
        printf("C\n");
    }
    else if (obtmarks>=33 && obtmarks<40)
    {
        printf("D\n");
    }
    else 
    {
        printf("F\n");
    }
    return 0;
}

// Program: Switch / bit-shift example
#include <stdio.h>

int main_switch_example(void){
    int movie=1;
    /* clarify precedence: shift left happens before addition?
       use parentheses to be explicit */
    switch ( (movie<<2) + movie )
    {
    case 4:
        printf("case 4\n");
        break;
    case 3:
        printf("case 3\n");
        break;
    case 2: 
        printf("case 2\n");
        break;
    default:
        printf("default\n");
        break;
    }
    return 0;
}
        



// Program: Multiplication table using for-loop
#include <stdio.h>

int main_table_for(void){
    int n ;
    printf("Enter the number: ");
    if (scanf("%d" , &n) != 1) return 1;

    for (int i = 0; i <= 10; i++)
    {
        printf("%d X %d = %d\n" , n , i , n*i);
    }
    
    return 0;
}


// Program: Multiplication table using while-loop (fixed stray semicolon and increment)
#include <stdio.h>

int main_table_while(void){
    int n , i=1;
    printf("Enter the number: ");
    if (scanf("%d", &n) != 1) return 1;
    while (i <= 10)
    {
        printf("%d X %d = %d\n" , n , i , n*i);
        i++;
    }
    
    return 0;
}




//write a program to reverse a number using for loop

// Program: Reverse a number using for-loop
#include <stdio.h>
int main_reverse_number(void){
    int n , reverse=0 , remainder;
    printf("Enter the number: ");
    if (scanf("%d", &n) != 1) return 1;

    for ( ; n!=0 ; )
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }
    printf("Reversed Number is: %d\n" , reverse);
    
    return 0;
}




// Program: Demonstrate comma operator and while conditions
#include <stdio.h>

int main_comma_and_while(void){
    int i,j;
    i = j = (2,4); /* comma operator yields rightmost value -> 4 */
    while (i-- && j++)
    {
        printf("%d %d\n" ,i,j);
    }
    
    return 0;
}

// Program: Static variable accumulation
#include <stdio.h>

int main_static_accumulate(void){
    static int i;
    int j;
    for (j = 0; j < 10; j++)
    {
        i += 2;
        i -= j;
    }
    printf("%d\n" , i);
    
    return 0;
}


// Program: Fixed-size star block pattern
#include <stdio.h>

int main_star_block(void) {
    int rows = 5;  // number of lines
    int cols = 4;  // number of asterisks per line

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("*");
        }
        printf("\n"); // move to next line
    }

    return 0;
}

//printing 

// Program: Alternating 0/1 pattern
#include <stdio.h>

int main_alternating_pattern(void) {
    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", (i + j) % 2);
        }
        printf("\n");
    }

    return 0;
}


//star pattern from right side (art)
//                *
//               **
//              ***
//             ****
//            *****


// Program: Right-aligned star triangle
#include <stdio.h>
int main_right_triangle(void) {
    int i ,j;
    int rows = 5;

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }   

    return 0;
}

//print square pattern hollow from inside

// Program: Hollow square pattern
#include <stdio.h>  
int main_hollow_square(void) {
    int n = 5; 

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n"); 
    }

    return 0;
}

// Program: Sum of two numbers (fixed signature and I/O)
#include<stdio.h>
void sum_numbers(void);

int main_sum_numbers(void)
{
    printf("\nGoing to calculate the sum of two numbers:\n");
    sum_numbers();
    return 0;
}
void sum_numbers()
{
    int a,b;
    printf("Enter two numbers: ");
    if (scanf("%d %d", &a,&b) == 2)
        printf("The sum is: %d\n" , a+b);
}





// Program: Welcome + sum function
#include <stdio.h>
void welcome() {
    printf(".. welcome to the world of c programming...\n");
}
int sum(int x, int y) {
    return x + y;
}
int main_welcome_sum(void) {
    int a, b, c;
    welcome();  
    printf("\nEnter the 1st no: ");
    if (scanf("%d", &a) != 1) return 1;
    printf("Enter the 2nd no: ");
    if (scanf("%d", &b) != 1) return 1;
    c = sum(a, b);
    printf("The sum of %d and %d is %d.\n", a, b, c);
    return 0;
}

// Program: Demonstrate moving nested function outside main
#include <stdio.h>
void func_prompt(void){
    int i,num,fact;
    printf("Enter a number: \n");
}
int main_func_prompt(void){
    func_prompt();
    return 0;
}


// Program: Factorial
#include <stdio.h>

/* function to calculate factorial */
long long factorial(int n) {
    long long fact = 1;

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

int main_factorial(void) {
    int num;
    long long result;

    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) return 1;

    result = factorial(num);   // function call

    printf("Factorial of %d is %lld\n", num, result);

    return 0;
}




// Program: Array indexing example (fixed initializer)
#include <stdio.h>

int main_array_indexing(void){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int i, j, k;
    j = arr[2];
    k = arr[j++];
    i = arr[j++];
    printf("j=%d k=%d i=%d\n", j, k, i);
    return 0;
}



// Program: sizeof examples (fixed duplicate identifier)
#include <stdio.h>

int main_sizeof_examples(void){
    int i, idx;
    int arrA[] = {1, 5, 7, 9, 10};
    printf("sizeof(arrA)=%zu\n" , sizeof(arrA));
    printf("sizeof(arrA[3])=%zu\n" , sizeof(arrA[3]));

    return 0;
}

// Program: 2D array placeholder (keeps valid syntax)
#include <stdio.h>

int main_2d_placeholder(void){
    int arr[3][5] = { {0} };
    (void)arr; /* placeholder to avoid unused warning */
    return 0;
}

//make a matrix 4x4 and print it (variant 1)
#include <stdio.h>
int main_matrix_print1(void){
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    // Print the matrix
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}




//make a matrix 4x4 and print it (variant 2)
#include <stdio.h>
int main_matrix_print2(void){
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    // Print the matrix
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// Program: Fill and print an n x n array (layers)
#include <stdio.h>

int main_layers(void){
    int n ,row, col;
    printf("\n\n\t enter the no of layers...");
    scanf("%d", &n);
    int ar[n][n];
    printf("\n\n\t Filling the array elements....");
    for(row=0;row<n;row++){
        for(col=0;col<n;col++){
            ar[row][col]=(row*n+1)+col;
        }
    }
    printf("\n\n\t The array is....\n\n");
    for(row=0;row<n;row++){
        for(col=0;col<n;col++){
            printf("%d\t", ar[row][col]);
        }
        printf("\n");
    }
    return 0;
}

// Program: Fill and print a fixed 5x5 array
#include <stdio.h>

int main_fixed_layers(void){
    int n = 5, row, col;
    int ar[5][5];

    printf("\n\n\tFilling the array elements....\n");
    for (row = 0; row < n; row++) {
        for (col = 0; col < n; col++) {
            ar[row][col] = row * n + col + 1; /* clearer expression */
        }
    }

    printf("\n\n\tThe array is....\n\n");
    for (row = 0; row < n; row++) {
        for (col = 0; col < n; col++) {
            printf("%d\t", ar[row][col]);
        }
        printf("\n");
    }

    return 0;
}

// Simple wrapper `main` so the file links as an executable.
// It doesn't run a sample automatically — it just confirms build.
int main(void) {
    puts("01.c contains many independent example functions.");
    puts("To run a specific example, compile a file that calls it or replace this main.");
    return 0;
}