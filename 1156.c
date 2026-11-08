#include <stdio.h>

int main() {
    double s = 0.0;
    double j = 1.0;
    for (int i = 1; i <= 39; i += 2) {
        s += (double)i / j;
        j *= 2;
    }
    printf("%.2lf\n", s);
    return 0;
}