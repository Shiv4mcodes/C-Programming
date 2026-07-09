#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of elements (max 100): ");
    scanf("%d", &n);
    
    if(n > 100 || n <= 0) {
        printf("Invalid size!\\n");
        return 1;
    }
    
    int arr[100]; // Fixed max size
    
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\\n");
    
    return 0;
}

