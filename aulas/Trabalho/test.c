#include <stdio.h>

int main() {
    int matrix[8][8];

    // Initialize the matrix with some values (you can modify this part)
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            matrix[i][j] = i * 8 + j; // You can replace this with your own values
        }
    }

    // Set even values to 0 and odd values to 1
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            if (matrix[i][j] % 2 == 0) {
                matrix[i][j] = 0;
            } else {
                matrix[i][j] = 1;
            }
        }
    }

    // Print the modified matrix
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}