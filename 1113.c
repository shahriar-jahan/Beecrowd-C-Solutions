#include <stdio.h>

int main() {
    int m, n;

    
    for ( ; scanf("%d %d", &m, &n); )
    {
        if (m==n)
        {
            break;
        }
        if (m>n)
        {
            printf("Decrescente\n");
        }
        else if (m<n)
        {
            printf("Crescente\n");
        }
        
        
        
    }
}