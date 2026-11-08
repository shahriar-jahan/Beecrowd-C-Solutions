#include <stdio.h>

int main() {
    int a, n;
    
    
    scanf("%d %d", &a, &n);

  
    while (n <= 0) {
        scanf("%d", &n);
    }

    int sum = 0;

    
    for (int i = 0; i < n; i++) {
        sum += (a + i);
    }

    
    printf("%d\n", sum);

    return 0;
}