#include<stdio.h>
int main()
{
    int distance;
    float fuel,mileage;
    scanf("%d %f",&distance,&fuel);
    mileage=distance/fuel;
    printf("%.3f km/l\n",mileage);
}