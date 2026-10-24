#include<stdio.h>
//tricky
int main()
{
    int start_h,start_m,end_h,end_m;
    int total_start_m,total_end_m;
    scanf("%d %d %d %d",&start_h,&start_m,&end_h,&end_m);
    total_start_m=(start_h*60)+start_m;
    total_end_m=(end_h*60)+end_m;
    int duration;
    if (total_start_m<total_end_m)
    {
        duration=total_end_m-total_start_m;
    }
    else
    {
        duration=((24*60)-total_start_m)+total_end_m;
    }
    int play_h,play_m;
    play_h=duration/60;
    play_m=duration%60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",play_h,play_m);
    
}