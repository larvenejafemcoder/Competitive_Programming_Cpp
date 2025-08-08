#include <stdio.h>

int main() {
    int n;
    int a[1000];

    scanf("%d", &n); // Read size of array

    // Input n elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Sort array in descending order using selection sort
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {  // If a[i] is less than a[j], swap
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
