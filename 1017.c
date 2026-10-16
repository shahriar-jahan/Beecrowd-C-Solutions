#include<stdio.h>
int main()
{
    int avg_speed,time;
    scanf("%d %d",&avg_speed,&time);
    int distance=time*avg_speed;
    float fuel=distance/12.0;
    printf("%.3f\n",fuel);
}