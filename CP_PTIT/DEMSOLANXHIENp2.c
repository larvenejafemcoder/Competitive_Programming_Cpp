#include <stdio.h>

int main() {
    int v;
    scanf("%d", &v);

    for (int l = 1; l <= v; l++) {
        printf("Test %d:\n", l);
        int n;
        scanf("%d", &n);
        int a[100];
        int freq[10000] = {0};

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            freq[a[i]]++;
        }

        for (int i = 0; i < n; i++) {
            if (freq[a[i]] > 0) {
                printf("%d xuat hien %d lan\n", a[i], freq[a[i]]);
                freq[a[i]] = 0; // mark as processed
            }
        }
    }

    return 0;
}
