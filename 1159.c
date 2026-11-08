#include <stdio.h>

int main() {
    int x;

    while (scanf("%d", &x) == 1) {
        if (x == 0) {
            break;
        }

        if (x % 2 != 0) {
            x++;
        }

        int sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += x;
            x += 2;
        }

        printf("%d\n", sum);
    }

    return 0;
}