#include <stdio.h>
int main() {
    int wards, patients, vitals;
    printf("Enter number of wards: ");
    scanf("%d", &wards);
    printf("Enter number of patients per ward: ");
    scanf("%d", &patients);
    printf("Enter number of vital signs per patient: ");
    scanf("%d", &vitals);
    int data[wards][patients][vitals];
    printf("Enter vital readings for each patient in each ward:\n");
    for(int w=0;w<wards;w++){
        for(int p=0;p<patients;p++){
            for(int v=0;v<vitals;v++){
                scanf("%d",&data[w][p][v]);
            }
        }
    }
    for(int w=0;w<wards;w++){
        printf("\nWard %d:\n", w+1);
        for(int p=0;p<patients;p++){
            int rowSum=0;
            for(int v=0;v<vitals;v++)
                rowSum += data[w][p][v];
            printf("Total vital readings for Patient %d: %d\n", p+1, rowSum);
        }
        for(int v=0;v<vitals;v++){
            int colSum=0;
            for(int p=0;p<patients;p++)
                colSum += data[w][p][v];
            printf("Total of Vital Sign %d: %d\n", v+1, colSum);
        }
    }
    return 0;
}

