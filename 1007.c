#include<stdio.h>
int main()
{
    int a,b,c,d,diff1,diff2,main_diff;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    diff1=a*b;
    diff2=c*d;
    main_diff=diff1-diff2;
    printf("DIFERENCA = %d\n",main_diff);

}