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
    for (int i = min+1; i <max; i++)
    {
        if (i%5==2 || i%5==3)
        {
            printf("%d\n",i);
        }
        
    }
   
    
    
}