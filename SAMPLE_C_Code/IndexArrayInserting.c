#include <stdio.h>

void insert_array(int a[], int *n, int b[], int m, int k) {
    for (int i = *n + m - 1; i >= k; i--) {
        a[i] = a[i - m];
    }
    for (int i = 0; i < m; i++) {
        a[k + i] = b[i];
    }
    *n += m;
}

int main() {
    int n, m, k;
    scanf("%d %d", &n, &m);

    int a[200], b[100];

    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < m; i++) scanf("%d", &b[i]);

    scanf("%d", &k);

    insert_array(a, &n, b, m, k);

    for (int i = 0; i < n; i++) printf("%d ", a[i]);

    return 0;
}
