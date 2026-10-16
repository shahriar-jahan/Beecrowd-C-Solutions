#include<stdio.h>
int main()
{
    int time,min,sec,hour;
    scanf("%d",&time);
    hour=time/3600;
    time=time%3600;
    min=(time)/60;
    sec=time%60;
    printf("%d:%d:%d\n",hour,min,sec);

}