//input Matrix from user then find sum of diagonal elements 

#
#include <stdio.h>

int main() {
    int matrix[3][3]; // 3x3
    int sum = 0;

    // Input elements of the 3x3 matrix 
    printf("Enter elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of diagonal elements where i == j
    for (int i = 0; i < 3; i++) {
        sum =sum+ matrix[i][i];
    }

    // Print the 3x3 matrix
    printf("\nMatrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Print sum of diagonal elements where i == j
    printf("\nSum of diagonal elements (where i == j): %d\n", sum);

    return 0;
}
