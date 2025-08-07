#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read number of elements

    int a[n], f[n]; // a[] = input numbers, f[] = frequency flags

    // Input numbers
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        f[i] = 1; // Initialize frequency to 1
    }

    // Count duplicates
    for (int i = 0; i < n; i++) {
        if (f[i] == 0) continue; // Already marked as duplicate
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                f[i]++;     // Increment frequency
                f[j] = 0;   // Mark duplicate so we don’t count it again
            }
        }
    }

    int b = 0; // Counter for how many numbers have duplicates

    // Count how many unique numbers are duplicated
    for (int i = 0; i < n; i++) {
        if (f[i] > 1) b++;
    }

    printf("%d\n", b); // Print count of duplicated numbers

    // Print the duplicated numbers
    for (int i = 0; i < n; i++) {
        if (f[i] > 1) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
