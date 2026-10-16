#include <stdio.h>

int main() {
    int amount, total;
    scanf("%d", &amount);
    total = amount;
    int notes100 = amount / 100;
    amount = amount % 100;

    int notes50 = amount / 50;
    amount = amount % 50;

    int notes20 = amount / 20;
    amount = amount % 20;

    int notes10 = amount / 10;
    amount = amount % 10;

    int notes5 = amount / 5;
    amount = amount % 5;

    int notes2 = amount / 2;
    amount = amount % 2;

    int notes1 = amount / 1;

    printf("%d\n", total);
    printf("%d nota(s) de R$ 100,00\n", notes100);
    printf("%d nota(s) de R$ 50,00\n", notes50);
    printf("%d nota(s) de R$ 20,00\n", notes20);
    printf("%d nota(s) de R$ 10,00\n", notes10);
    printf("%d nota(s) de R$ 5,00\n", notes5);
    printf("%d nota(s) de R$ 2,00\n", notes2);
    printf("%d nota(s) de R$ 1,00\n", notes1);

    return 0;
}