#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    
    // Sum
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    printf("Sum: %d\\n", sum);
    
    // Find max
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) max = arr[i];
    }
    printf("Max: %d\\n", max);
    
    // Reverse print
    printf("Reverse: ");
    for(int i = size-1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\\n");
    
    return 0;
}

