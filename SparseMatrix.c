#include <stdio.h>

int main() {
    // 1. Original 4x5 Sparse Matrix
    int sparseMatrix[4][5] = {
        {0, 0, 3, 0, 4},
        {0, 0, 5, 7, 0},
        {0, 0, 0, 0, 0},
        {0, 2, 6, 0, 0}
    };

    // 2. Count non-zero elements to determine size of compact matrix
    int size = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (sparseMatrix[i][j] != 0) {
                size++;
            }
        }
    }

    // 3. Initialize the Compact Matrix: 3 rows (Row, Col, Value) and 'size' columns
    int compactMatrix[3][size];
    int k = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (sparseMatrix[i][j] != 0) {
                compactMatrix[0][k] = i;              // Store Row Index
                compactMatrix[1][k] = j;              // Store Column Index
                compactMatrix[2][k] = sparseMatrix[i][j]; // Store Value
                k++;
            }
        }
    }

    // 4. Display the Compact Matrix
    printf("Compact Representation:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", compactMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}