#include <stdio.h>

int main() {
    int x;

    
    for ( ; scanf("%d", &x) == 1; ) {
        
        
        if (x == 0) {
            break;
        }

        
        for (int i = 1; i <= x; i++) {
            printf("%d", i);

            
            if (i < x) {
                printf(" ");
            }
        }
        

        printf("\n");
    }

    return 0;
}