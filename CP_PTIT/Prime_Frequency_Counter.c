#include <stdio.h>
#include <math.h>

int is_prime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= sqrt(num); i++)
        if (num % i == 0)
            return 0;
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);

    for (int test = 1; test <= t; test++) {
        printf("Test %d:\n", test);

        int n, a[100], freq[10000] = {0};
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            freq[a[i]]++;
        }

        // Sort the array
        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
                if (a[i] > a[j]) {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }

        // Check and print prime frequencies
        for (int i = 0; i < n; i++) {
            if (is_prime(a[i]) && freq[a[i]] > 0) {
                printf("%d xuat hien %d lan\n", a[i], freq[a[i]]);
                freq[a[i]] = 0;
            }
        }
    }

    return 0;
}
