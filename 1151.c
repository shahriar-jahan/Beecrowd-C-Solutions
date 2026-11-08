#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a = 0, b = 1, next;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d", a);
        } else if (i == 1) {
            printf(" %d", b);
        } else {
            next = a + b;
            a = b;
            b = next;
            printf(" %d", next);
        }
    }
    printf("\n");
    
}