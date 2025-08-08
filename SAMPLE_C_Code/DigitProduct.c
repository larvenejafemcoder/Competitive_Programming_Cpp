#include <stdio.h>

int productOfDigits(int n) {
    int s = 1;
    if (n == 0) return 0; // special case: 0 itself

    while (n != 0) {
        int a = n % 10;
        s *= a;
        n /= 10;
    }
    return s;
}

int main() {
    int n;
    scanf("%d", &n);

    int result = productOfDigits(n);
    printf("%d\n", result);

    return 0;
}
