#include<stdio.h>
int main()
{
    int n;
    double x,y;
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        scanf("%lf %lf",&x,&y);
        if (y==0.0)
        {
            printf("divisao impossivel\n");
            continue;
        }
        printf("%.1lf\n",x/y);
        
    }
    
}