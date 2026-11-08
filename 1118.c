#include <stdio.h>

int main() {
    double avg = 0.0;
    int count = 0;
    int x;

    
    while (1) {
        double n;
        
        
        if (scanf("%lf", &n) != 1) break;

        
        if (n < 0.0 || n > 10.0) {
            printf("nota invalida\n");
        } 
        else {
            count++;
            avg += n;

            
            if (count == 2) {
                printf("media = %.2lf\n", avg / 2.0);
                
                
                while (1) {
                    printf("novo calculo (1-sim 2-nao)\n");
                    scanf("%d", &x);

                    if (x == 1) {
                        
                        count = 0;
                        avg = 0.0;
                        break;
                    } 
                    else if (x == 2) {
                       
                        return 0;
                    }
                    
                }
            }
        }
    }

    return 0;
}