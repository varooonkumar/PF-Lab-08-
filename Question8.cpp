#include <stdio.h>
int main() {
    int floors, rooms, beds;
    printf("Enter number of floors: ");
    scanf("%d", &floors);
    printf("Enter number of rooms per floor: ");
    scanf("%d", &rooms);
    printf("Enter number of beds per room: ");
    scanf("%d", &beds);
    int building[floors][rooms][beds];
    int emptyCount = 0;
    printf("Enter bed status (0 = empty, 1 = occupied):\n");
    for(int i=0;i<floors;i++){
        for(int j=0;j<rooms;j++){
            for(int k=0;k<beds;k++){
                scanf("%d",&building[i][j][k]);
                if(building[i][j][k]==0)
                    emptyCount++;
            }
        }
    }
    printf("\nTotal Empty Beds: %d\n", emptyCount);
    return 0;
}

