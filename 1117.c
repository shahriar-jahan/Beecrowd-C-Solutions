#include<stdio.h>
int main()
{
    double n;
    double avg=0.0;
    int count=0;
    for ( ; scanf("%lf",&n);)
    {
        if (n<0 || n>10)
        {
            printf("nota invalida\n");
        }
        else{
            if (n>=0.0 && n<=10.0)
            {
                count++;
                avg+=n;
            }
            if (count==2)
            {
                printf("media = %.2lf\n",avg/2);
                break;
            }
            
        }
        
    }
    
}