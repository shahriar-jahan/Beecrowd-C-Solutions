#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    double a,b,c;
    float avg;
    for (int i = 0; i < n; i++)
    {
        scanf("%lf %lf %lf",&a,&b,&c);
        avg=(a*2+b*3+c*5)/10;
        printf("%.1lf\n",avg);

    }
    
}