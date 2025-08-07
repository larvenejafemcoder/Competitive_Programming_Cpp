#include <stdio.h>

void nhap(int a[], int b[], int n) {
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        b[i] = 1; // mark all as uncounted
}

void dem(int a[], int b[], int n) {
    for (int i = 0; i < n; i++) {
        if (b[i] == 1) {
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (a[i] == a[j]) {
                    count++;
                    b[j] = 0; // mark as counted
                }
            }
            printf("%d %d\n", a[i], count);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a[100], b[100];

    nhap(a, b, n);
    dem(a, b, n);

    return 0;
}
