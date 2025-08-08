#include <stdio.h>

int isPerfect(int x) {
    int sum = 1; // 1 is always a divisor (except for x=1)
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            sum += i;
            if (i != x / i) sum += x / i; // add the paired divisor
        }
    }
    return (sum == x && x != 1);
}

int main() {
    int n;
    scanf("%d", &n);

    int first = 1;
    for (int i = 2; i < n; i++) {
        if (isPerfect(i)) {
            if (!first) printf(" ");
            printf("%d", i);
            first = 0;
        }
    }
    return 0;
}
