#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of students (rows): ");
    scanf("%d", &rows);
    printf("Enter number of subjects (columns): ");
    scanf("%d", &cols);

    int marks[rows][cols], transpose[cols][rows];
    printf("\nEnter marks of students:\n");
    for (int i=0; i<rows; i++) {
        printf("Student %d:\n", i+1);
        for (int j=0; j<cols; j++) {
            printf("  Subject %d: ", j+1);
            scanf("%d", &marks[i][j]);
        }
    }
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            transpose[j][i] = marks[i][j];
        }
    }
    printf("\nOriginal Marks Table (Students x Subjects):\n");
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            printf("%5d ", marks[i][j]);
        }
        printf("\n");
    }
    printf("\nTransposed Marks Table (Subjects x Students):\n");
    for (int i=0; i<cols; i++) {
        for (int j=0; j<rows; j++) {
            printf("%5d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
} 

