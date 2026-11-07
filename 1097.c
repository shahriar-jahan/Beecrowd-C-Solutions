#include<stdio.h>
int main()

{
    int i=1,j=i+6;
    for (i = 1; i <=9; i+=2)
    {
        for ( j = i+6; j>=(i+6)-2; j--)
        {
            printf("I=%d J=%d\n",i,j);
        }
        
    }
    
}