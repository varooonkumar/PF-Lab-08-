#include <stdio.h>
int main() {
    int joints, movements, coordinates = 3;
    printf("Enter number of joints: ");
    scanf("%d", &joints);
    printf("Enter number of movements: ");
    scanf("%d", &movements);
    int readings[joints][movements][coordinates];
    printf("Enter readings (x y z for each movement of each joint):\n");
    for(int i=0;i<joints;i++){
        for(int j=0;j<movements;j++){
            for(int k=0;k<coordinates;k++){
                scanf("%d",&readings[i][j][k]);
                if(readings[i][j][k]<0)
                    readings[i][j][k]*=-1;
            }
        }
    }
    printf("\nNormalized Readings:\n");
    for(int i=0;i<joints;i++){
        printf("Joint %d:\n",i+1);
        for(int j=0;j<movements;j++){
            printf("Movement %d: ",j+1);
            for(int k=0;k<coordinates;k++){
                printf("%d ",readings[i][j][k]);
            }
            printf("\n");
        }
    }
    return 0;
}

