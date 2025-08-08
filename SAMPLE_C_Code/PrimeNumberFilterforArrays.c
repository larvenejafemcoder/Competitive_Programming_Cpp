#include <stdio.h>
#include <math.h>

int isPrime(int x) {
    if (x < 2) return 0;
    for (int j = 2; j <= sqrt(x); j++) {
        if (x % j == 0) return 0;
    }
    return 1;
}

int main() {
    int m;
    scanf("%d", &m);
    while (m--) {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        for (int i = 0; i < n; i++) {
            if (isPrime(a[i])) {
                printf("%d ", a[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
