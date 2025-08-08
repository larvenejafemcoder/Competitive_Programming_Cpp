#include <stdio.h>

int main() {
    int m;
    scanf("%d", &m);
    while (m--) {
        long long n;
        scanf("%lld", &n);

        if (n == 1 || n == 2) {
            printf("1\n");
            continue;
        }

        long long prev = 1, curr = 1;
        for (long long i = 3; i <= n; i++) {
            long long next = prev + curr;
            prev = curr;
            curr = next;
        }
        printf("%lld\n", curr);
    }
    return 0;
}
