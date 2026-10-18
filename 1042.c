#include<stdio.h>
//a bit tricky code
int main()
{
    int a,b,c;
    int x,y,z;
    scanf("%d %d %d",&a,&b,&c);
    x=a;
    y=b;
    z=c;
    int temp;
    if (a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    if (b>c)
    {
        temp=b;
        b=c;
        c=temp;
    }
    if (a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    printf("%d\n%d\n%d\n",a,b,c);
    printf("\n");
    printf("%d\n%d\n%d\n",x,y,z);
    
}