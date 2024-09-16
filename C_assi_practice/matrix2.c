#include <stdio.h>


void createMatrix(int rows, int cols, int matrix[rows][cols]) {
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

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);


    int matrix[rows][cols];


    createMatrix(rows, cols, matrix);


    displayMatrix(rows, cols, matrix);

    return 0;
 }
