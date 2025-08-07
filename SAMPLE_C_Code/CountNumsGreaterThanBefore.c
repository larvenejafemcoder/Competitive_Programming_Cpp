#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, count = 0;
        scanf("%d", &n);
        unsigned long long a[n];
        for (int i = 0; i < n; i++) {
            scanf("%llu", &a[i]);
        }
        for (int i = 1; i < n; i++) {
            if (a[i] > a[i - 1]) {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
