#include <stdio.h>

int main() {
    int n;
    int a[1000];

    scanf("%d", &n); // Read number of elements

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Sort array in ascending order using selection sort
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // If a[i] is greater than a[j], swap them
            if (a[i] > a[j]) {
                int s = a[i];
                a[i] = a[j];
                a[j] = s;
            }
        }
    }

    // Print sorted array
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
