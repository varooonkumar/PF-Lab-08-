#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of branches (rows): ");
    scanf("%d", &rows);
    printf("Enter number of products (columns): ");
    scanf("%d", &cols);

    int q1[rows][cols], q2[rows][cols], total[rows][cols];
    printf("\nEnter sales data for Quarter 1 (in thousands):\n");
    for (int i = 0; i < rows; i++) {
        for (int j=0; j<cols; j++) {
            printf("Branch %d, Product %d: ", i+1, j+1);
            scanf("%d", &q1[i][j]);
        }
    }
    printf("\nEnter sales data for Quarter 2 (in thousands):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Branch %d, Product %d: ", i+1, j+1);
            scanf("%d", &q2[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            total[i][j] = q1[i][j] + q2[i][j];
        }
    }
    printf("\nTotal Sales in Half Year (in thousands):\n");
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            printf("%5d ", total[i][j]);
        }
        printf("\n");
    }
    return 0;
} 

