#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n;  // support bigger numbers
        scanf("%lld", &n);

        if (n < 0) {
            printf("NO\n"); // negative numbers can’t be perfect squares
            continue;
        }

        long long low = 0, high = n;
        int isPerfect = 0;

        while (low <= high) {
            long long mid = (low + high) / 2;
            long long sq = mid * mid;

            if (sq == n) {
                isPerfect = 1;
                break;
            } else if (sq < n) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        printf(isPerfect ? "YES\n" : "NO\n");
    }
    return 0;
}
