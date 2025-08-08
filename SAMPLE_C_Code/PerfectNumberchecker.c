#include <stdio.h> //Mersenne prime

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 0) {
        printf("0");
        return 0;
    }

    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            sum += i;
    }

    if (sum == n)
        printf("1");
    else
        printf("0");

    return 0;
}
