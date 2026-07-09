#include <stdio.h>

int main() {
    // 2D array: 3x4 matrix
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    
    printf("Matrix:\\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%2d ", matrix[i][j]);
        }
        printf("\\n");
    }
    
    // Sum all elements
    int sum = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            sum += matrix[i][j];
        }
    }
    printf("Sum: %d\\n", sum);
    
    return 0;
}

