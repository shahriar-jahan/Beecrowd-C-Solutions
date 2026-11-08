#include <stdio.h>

int main() {
    int age;
    int sum = 0;
    int count = 0;

    while (1) {
        scanf("%d", &age);

        if (age < 0) {
            break;
        }

        sum += age;
        count++;
    }

    if (count > 0) {
        printf("%.2f\n", (float)sum / count);
    }

    return 0;
}