#include<stdio.h>
int main()
{
    int a,b,temp,mul;
    scanf("%d %d",&a,&b);
    if (b>a)
    {
        temp=b;
        b=a;
        a=temp;
    }
    if (a%b==0)
    {
        printf("Sao Multiplos\n");
    }
    else
    {
        printf("Nao sao Multiplos\n");
    }
    
}