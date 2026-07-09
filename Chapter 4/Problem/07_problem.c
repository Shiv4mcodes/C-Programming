//check the number is prime or not using loop
#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    int isPrime = 1;  // Assume the number is prime (1 = True)
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // Check if number is less than or equal to 1
    if (n <= 1) {
        isPrime = 0;
    }
    
    // Check for divisors from 2 to sqrt(n)
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            isPrime = 0;  // Found a divisor, not prime
            break;        // Exit the loop
        }
    }
    
    // Display result
    if (isPrime) {
        printf("%d is a PRIME number\n", n);
    } else {
        printf("%d is NOT a prime number\n", n);
    }
    
    return 0;
}