#include <stdio.h>

int main() {
    // Basic array declaration
    int arr[6] = {6, 4, 3, 2, 5, 9}; // Initialized with values

    for (int i = 0; i < 6; i++){
        printf("%d", arr[i]);
    } // this will print the whole array

    int partial[4] = {2 ,5};
    for (int i = 0; i < 2; i++)
    {
        printf("%d", partial[i]);
    }
    
    return 0;
}
