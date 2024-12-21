#include <stdio.h>
int main() {
    int a[10][10], b[10][10], product[10][10], rowsA, colsA, rowsB, colsB;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &rowsA, &colsA);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &rowsB, &colsB);
    if (colsA != rowsB) {
        printf("Matrix multiplication not possible!\n");
        return 1;
    }
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            product[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Product of matrices:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}
