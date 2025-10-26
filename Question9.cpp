#include <stdio.h>
int main() {
    int cities, days, times = 3;
    printf("Enter number of cities: ");
    scanf("%d", &cities);
    printf("Enter number of days: ");
    scanf("%d", &days);
    int temp[cities][days][times];
    printf("Enter temperature readings for each city (morning, afternoon, night):\n");
    for(int i=0;i<cities;i++){
        for(int j=0;j<days;j++){
            for(int k=0;k<times;k++){
                scanf("%d",&temp[i][j][k]);
            }
        }
    }
    for(int i=0;i<cities;i++){
        int max = temp[i][0][0];
        for(int j=0;j<days;j++){
            for(int k=0;k<times;k++){
                if(temp[i][j][k]>max)
                    max = temp[i][j][k];
            }
        }
        printf("Highest temperature for City %d: %d\n", i+1, max);
    }
    return 0;
}

