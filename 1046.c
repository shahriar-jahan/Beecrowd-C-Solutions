#include<stdio.h>
int main()
{
    int start,end,calc;
    scanf("%d %d",&start,&end);
    if (start<end)
    {
        calc=end-start;
    }
    else
    {
        calc=(24-start)+end;
    }
    printf("O JOGO DUROU %d HORA(S)\n",calc);
    
}