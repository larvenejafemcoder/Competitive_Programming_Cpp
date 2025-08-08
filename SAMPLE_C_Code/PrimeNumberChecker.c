#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        
        if (n < 2) {
            printf("NO\n");
            continue;
        }
        
        int isPrime = 1;
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
        
        if (isPrime)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
