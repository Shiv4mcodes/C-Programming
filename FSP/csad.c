#include <stdio.h>

int main(){
    int n, row, col, num;

    printf("\n\n\t enter the no of layers...");
    scanf("%d", &n);

    int ar[n][n];

    for(row = 0; row < n; row++){
        for(col = 0; col < n; col++){
            ar[row][col] = 0;
        }
    }

    row = 0;
    col = n / 2;

    for(num = 1; num <= n * n; num++){

        ar[row][col] = num;

        if(num % n == 0){
            row = row + 1;
        }
        else{
            row = row - 1;
            col = col + 1;

            if(row < 0)
                row = n - 1;
            if(col == n)
                col = 0;
        }
    }

    printf("\n\n\t The array is....\n\n");

    for(row = 1; row <= n; row++){
        for(col = 1; col <= n; col++){
            printf("%d\t", ar[row - 1][col - 1]);
        }
        printf("\n");
    }

    return 0;
}


//find out factorial of even numbers accepting user input
#include <stdio.h>
int main(){
    int n;
    unsigned long long fact = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else if (n == 0) {
        printf("The factorial of 0 is 1.\n");
    } else if (n % 2 != 0) {
        printf("Please enter an even number.\n");
    } else {
        for(int i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("The factorial of %d is %llu.\n", n, fact);
        }

    return 0;
}



#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fact = fact * i;
        sum = sum + fact;
    }

    printf("Sum of factorials = %lld", sum);

    return 0;
}


#include <stdio.h>

int main() {
    int n, i;
    long long fact = 2, sum = 0;   // 2! included

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 2; (2*i) <= n; i++) {
        fact = fact * (2*i + 1) * (2*i + 2);  // Calculate (2i)!    
        sum = sum + fact;
    }

    printf("Sum of factorials of even numbers = %lld", sum);

    return 0;
}





#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    printf("Length of the string: %d\n", length);

    return 0;
}






#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str1);

    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';

    printf("Copied string: %s", str2);

    return 0;
}



#include <stdio.h>
#include <string.h>


int main(){
    
    return 0;
}