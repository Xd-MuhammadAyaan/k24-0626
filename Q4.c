#include<stdio.h>
int main(){
    int d=1207;
    float totalforward,totalbackward,fuelconsumed,fuelAvg,fuelOneWay,totalfuelcost;
    printf("Enter car's fuel average:");
    scanf("%f",&fuelAvg);
    fuelconsumed=d/fuelAvg;
    fuelOneWay=(d/2)/fuelAvg;
    totalforward=118*fuelOneWay;
    totalbackward=123*fuelOneWay;
    totalfuelcost=totalbackward+totalforward;
    printf("Total fuel cost for both ways is: %.2f",totalfuelcost);
    printf("\n");
    printf("Total fuel consumed for the trip is: %.2f",fuelconsumed);

    return 0;
}