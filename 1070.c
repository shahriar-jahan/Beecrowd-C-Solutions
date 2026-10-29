#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (n%2==0)
    {
        n=n+1;
    }
    for (int i = 1; i <=6; i++)
    {
        printf("%d\n",n);
        n=n+2;
    }
    
    
    
}