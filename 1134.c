#include<stdio.h>
int main()
{
    int n;
    int alc=0;
    int gas=0;
    int die=0;
    for (; scanf("%d",&n);)
    {
        if (n==4)
        {
            break;
        }
        else if (n==1)
        {
            alc++;
        }
        else if (n==2)
        {
            gas++;
        }
        else if (n==3)
        {
            die++;
        }
        
        
        
        
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alc);
    printf("Gasolina: %d\n", gas);
    printf("Diesel: %d\n", die);
    
}