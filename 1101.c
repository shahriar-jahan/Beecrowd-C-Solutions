#include <stdio.h>

int main() {
    int m, n;

    
    for ( ; scanf("%d %d", &m, &n) == 2; ) {
        

        if (m <= 0 || n <= 0) {
            break;
        }

        int min, max;

        
        if (m < n) {
            min = m;
            max = n;
        } else {
            min = n;
            max = m;
        }

        int sum = 0; 

        
        for (int i = min; i <= max; i++) {
            printf("%d ", i);
            sum += i;
        }

       
        printf("Sum=%d\n", sum);
    }

   
}