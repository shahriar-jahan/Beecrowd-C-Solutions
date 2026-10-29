#include<stdio.h>
int main()
{
    double a,b,c,d,e,f,sum,avr;
    scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);
    int count=0;
    sum=0;
    if (a>0)
    {
        count++;
        sum=sum+a;
    }
    if (b>0)
    {
        count++;
        sum=sum+b;
    }
    if (c>0)
    {
        count++;
        sum=sum+c;
    }
    if (d>0)
    {
        count++;
        sum=sum+d;
    }
    if (e>0)
    {
        count++;
        sum=sum+e;
    }
    if (f>0)
    {
        count++;
        sum=sum+f;
    }
    printf("%d valores positivos\n",count);
    avr=sum/count;
    printf("%.1lf\n",avr);

    
}