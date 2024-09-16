#include <stdio.h>


void inputMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element for position (%d,%d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}


void displayMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("\nMatrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}


void multiplyMatrices(int rows1, int cols1, int matrix1[rows1][cols1],
                      int rows2, int cols2, int matrix2[rows2][cols2],
                      int result[rows1][cols2]) {
    if (cols1 != rows2) {
        printf("Matrix multiplication is not possible.\n");
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int rows1, cols1, rows2, cols2;

    // Taking input for first matrix
    printf("Enter the number of rows of first matrix: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns of first matrix: ");
    scanf("%d", &cols1);

    // Taking input for second matrix
    printf("Enter the number of rows of second matrix: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns of second matrix: ");
    scanf("%d", &cols2);

    // Check if matrix multiplication is possible
    if (cols1 != rows2) {
        printf("Matrix multiplication is not possible.\n");
        return 1;
    }

    // Creating matrices based on user input
    int matrix1[rows1][cols1], matrix2[rows2][cols2], result[rows1][cols2];

    // Input first matrix
    printf("\nFor first matrix:\n");
    inputMatrix(rows1, cols1, matrix1);

    // Input second matrix
    printf("\nFor second matrix:\n");
    inputMatrix(rows2, cols2, matrix2);

    // Display both matrix
    printf("\nFirst matrix:\n");
    displayMatrix(rows1, cols1, matrix1);

    printf("\nSecond matrix:\n");
    displayMatrix(rows2, cols2, matrix2);

    // Multiplye matrix and storing result in 'result'
    multiplyMatrices(rows1, cols1, matrix1, rows2, cols2, matrix2, result);

    // Display the result matrix after multiplication
    printf("\nResult of matrix multiplication:\n");
    displayMatrix(rows1, cols2, result);

    return 0;
}

