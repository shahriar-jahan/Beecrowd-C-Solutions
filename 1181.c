#include <stdio.h>

int main() {
    int line;
    char operation;
    double m[12][12];

    scanf("%d", &line);
    scanf(" %c", &operation);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &m[i][j]);
        }
    }

    double sum = 0.0;
    for (int j = 0; j < 12; j++) {
        sum += m[line][j];
    }

    if (operation == 'S') {
        printf("%.1lf\n", sum);
    } else if (operation == 'M') {
        printf("%.1lf\n", sum / 12.0);
    }

    return 0;
}