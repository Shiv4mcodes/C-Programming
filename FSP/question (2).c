//palindrome
#include <stdio.h>

int main() {
    int num, reverse = 0, remainder, original;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }
    printf("Reversed number = %d\n", reverse);

    if (original == reverse)
        printf("The number is a Palindrome.");
    else
        printf("The number is not a Palindrome.");

    return 0;
}

//largest element in an array using pointers
#include <stdio.h>
int main_largest_array(void){
    int n, i, *ptr, largest;
    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1) return 1;

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) return 1;
    }

    ptr = arr; // point to the first element
    largest = *ptr; 

    for (i = 1; i < n; i++) {
        ptr++; 
        if (*ptr > largest) {
            largest = *ptr; 
        }
    }

    printf("The largest element is: %d\n", largest);
    
    return 0;
}