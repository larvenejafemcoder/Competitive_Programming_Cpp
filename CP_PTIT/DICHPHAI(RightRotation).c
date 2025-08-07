#include <stdio.h>

// Function to right rotate the array by k positions
void rightRotate(int arr[], int n, int k) {
    // Print last k elements first
    for (int i = n - k; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Then print the rest
    for (int i = 0; i < n - k; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main() {
    int n, k;
    int a[100];

    // Input array size
    scanf("%d", &n);

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Input rotation steps
    scanf("%d", &k);

    // Normalize k in case it's larger than n
    k %= n;

    // Call rotation function
    rightRotate(a, n, k);

    return 0;
}
