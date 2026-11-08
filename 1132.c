#include<stdio.h>
int main()
{
    int x,y;
    int max,min;
    int sum=0;
    scanf("%d %d",&x,&y);
    if (x>y)
    {
        min=y;
        max=x;
    }
    else if (x<y)
    {
        min=x;
        max=y;
    }
    for (int i = min; i <=max; i++)
    {
        if (i%13!=0)
        {
            sum+=i;
        }
        
    }
    printf("%d\n",sum);
    
    
}