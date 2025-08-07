#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int test = 1; test <= t; test++) {
        int n, m, k;
        scanf("%d %d", &n, &m);
        scanf("%d", &k);

        int a[200]; // increased size to handle a + b
        int b[100];

        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (int i = 0; i < m; i++)
            scanf("%d", &b[i]);

        // Shift a[k..n-1] to a[k+m..n+m-1]
        for (int i = n - 1; i >= k; i--)
            a[i + m] = a[i];

        // Insert b into a at position k
        for (int i = 0; i < m; i++)
            a[k + i] = b[i];

        // Output
        printf("Test %d:\n", test);
        for (int i = 0; i < n + m; i++)
            printf("%d ", a[i]);
        printf("\n");
    }

    return 0;
}
