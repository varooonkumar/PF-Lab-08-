#include <stdio.h>
int main() {
    int n, flag = 1;
    printf("Enter the number of students (rows/columns): ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter the seating chart (0 or 1):\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i==j && matrix[i][j]!=1) || (i!=j && matrix[i][j]!=0)){
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
        printf("All students are sitting in their correct seats (Identity Matrix).\n");
    else
        printf("Some students are not in their correct seats.\n");
    return 0;
} 

