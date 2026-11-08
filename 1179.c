#include <stdio.h>

int main() {
    int par[5], impar[5];
    int p_count = 0, i_count = 0;

    for (int i = 0; i < 15; i++) {
        int x;
        scanf("%d", &x);

        if (x % 2 == 0) {
            par[p_count] = x;
            p_count++;
            if (p_count == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, par[j]);
                }
                p_count = 0;
            }
        } else {
            impar[i_count] = x;
            i_count++;
            if (i_count == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                i_count = 0;
            }
        }
    }

    for (int j = 0; j < i_count; j++) {
        printf("impar[%d] = %d\n", j, impar[j]);
    }

    for (int j = 0; j < p_count; j++) {
        printf("par[%d] = %d\n", j, par[j]);
    }

    return 0;
}