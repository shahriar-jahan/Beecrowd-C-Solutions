#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long pa, pb;
        double g1, g2;
        scanf("%lld %lld %lf %lf", &pa, &pb, &g1, &g2);

        int years = 0;
        int flag = 0;

        while (pa <= pb) {
            pa += (pa * g1) / 100;
            pb += (pb * g2) / 100;
            years++;

            if (years > 100) {
                flag = 1;
                break;
            }
        }

        if (flag) {
            printf("Mais de 1 seculo.\n");
        } else {
            printf("%d anos.\n", years);
        }
    }

    return 0;
}