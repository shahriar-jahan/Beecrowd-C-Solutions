#include<stdio.h>
int main()
{
    long long d1,h1,m1,s1;
    long long d2,h2,m2,s2;
    char text1[10];
    char text2[10];
    scanf("%s %lld",text1,&d1);
    scanf("%lld : %lld : %lld",&h1,&m1,&s1);
    scanf("%s %lld",text2,&d2);
    scanf("%lld : %lld : %lld",&h2,&m2,&s2);

    long long start_total=(d1*86400)+(h1*3600)+(m1*60)+(s1);
    long long end_total=(d2*86400)+(h2*3600)+(m2*60)+(s2);
    long long diff=end_total-start_total;
    long long day,hour,min,sec;
    day=diff/86400;
    diff=diff%86400;
    hour=diff/3600;
    diff=diff%3600;
    min=diff/60;
    sec=diff%60;
    printf("%lld dia(s)\n",day);
    printf("%lld hora(s)\n",hour);
    printf("%lld minuto(s)\n",min);
    printf("%lld segundo(s)\n",sec);

}