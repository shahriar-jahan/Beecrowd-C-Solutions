#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int amount;
    char type;

    int total=0;
    int total_c=0;
    int total_r=0;
    int total_s=0;

    for (int i = 1; i <=n; i++)
    {
        scanf("%d %c",&amount,&type);
        total=total+amount;
        if (type=='C')
        {
            total_c=total_c+amount;
        }else if (type=='R')
        {
            total_r=total_r+amount;
        }
        else if (type=='S')
        {
            total_s=total_s+amount;
        }
        
        
        
    }
    double per_c = 0, per_r = 0, per_s = 0;
    if (total > 0) {
        per_c = ((double)total_c / total) * 100.0;
        per_r = ((double)total_r / total) * 100.0;
        per_s = ((double)total_s / total) * 100.0;
    }
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", total_c);
    printf("Total de ratos: %d\n", total_r);
    printf("Total de sapos: %d\n", total_s);
    printf("Percentual de coelhos: %.2lf %%\n", per_c);
    printf("Percentual de ratos: %.2lf %%\n", per_r);
    printf("Percentual de sapos: %.2lf %%\n", per_s);
    
}