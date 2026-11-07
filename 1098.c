#include <stdio.h>

int main() {
    int i, j;
    
    for (i = 0; i <= 20; i += 2) {
        for (j = 1; j <= 3; j++) {
            double current_i = i / 10.0;
            double current_j = current_i + j;
            
            
            if (i == 0 || i == 10 || i == 20) {
                
                printf("I=%.0lf J=%.0lf\n", current_i, current_j);
            } else {
                printf("I=%.1lf J=%.1lf\n", current_i, current_j);
            }
        }
    }
    
    return 0;
}