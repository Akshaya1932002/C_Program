#include <stdio.h>
void main()
{
    int row, column;
    printf("Enter the row size: ");
    scanf("%d", &row);
    printf("Enter the column size: ");
    scanf("%d", &column);

    int arr1[row][column], arr2[row][column];
    int sub[row][column], mul[row][column];
    int i, j;

    // First matrix input
    printf("Enter the elements of first matrix:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < column; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    // Second matrix input
    printf("Enter the elements of second matrix:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < column; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    // Subtraction and Multiplication
    for(i = 0; i < row; i++) {
        for(j = 0; j < column; j++) {
            sub[i][j] = arr1[i][j] - arr2[i][j];
            mul[i][j] = arr1[i][j] * arr2[i][j];
        }
    }

    // Print subtraction result
    printf("\nSubtraction of matrices:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < column; j++) {
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }

    // Print multiplication result
    printf("\nMultiplication of matrices (element-wise):\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < column; j++) {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }
}
