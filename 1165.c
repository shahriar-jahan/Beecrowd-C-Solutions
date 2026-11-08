#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);

        int is_prime = 1;

        if (x <= 1) {
            is_prime = 0;
        } else {
            int limit = sqrt(x);
            for (int j = 2; j <= limit; j++) {
                if (x % j == 0) {
                    is_prime = 0;
                    break;
                }
            }
        }

        if (is_prime) {
            printf("%d eh primo\n", x);
        } else {
            printf("%d nao eh primo\n", x);
        }
    }

    return 0;
}