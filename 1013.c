#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,maior,greatest;
    scanf("%d %d %d",&a,&b,&c);
    maior=(a+b+abs(a-b))/2;
    greatest=(maior+c+abs(maior-c))/2;
    printf("%d eh o maior\n",greatest);
}