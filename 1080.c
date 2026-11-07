#include<stdio.h>
int main()
{
    int n;
    int highest=0;
    int position=0;
    for (int i = 1; i <= 100; i++)
    {
        scanf("%d",&n);
        if (n>highest)
        {
            highest=n;
            position=i;
        }
        
    }
    printf("%d\n",highest);
    printf("%d\n",position);
    
}