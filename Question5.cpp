#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    int image[rows][cols][3];
    long sumR = 0, sumG = 0, sumB = 0;
    printf("Enter RGB values for each pixel:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            for(int k=0;k<3;k++){
                scanf("%d",&image[i][j][k]);
            }
            sumR += image[i][j][0];
            sumG += image[i][j][1];
            sumB += image[i][j][2];
        }
    }
    int totalPixels = rows * cols;
    printf("\nAverage Red Intensity: %.2f\n", (float)sumR/totalPixels);
    printf("Average Green Intensity: %.2f\n", (float)sumG/totalPixels);
    printf("Average Blue Intensity: %.2f\n", (float)sumB/totalPixels);
    return 0;
}

