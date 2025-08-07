// 📦 ArrayWhirl: Rotate It Like It's Hot 🔥
// Left-rotates an array by `k` positions.
// Example: [1 2 3 4 5], k = 2 ➜ [3 4 5 1 2]

#include <stdio.h>

int main() {
    int n, k;
    int a[100];

    // 🌟 Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // 🌟 Input array elements
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // 🌟 Input rotation count
    printf("Enter rotation count (k): ");
    scanf("%d", &k);

    // 💫 Left Rotate: print from k to n, then from 0 to k
    printf("Array after left rotation:\n");
    for (int i = k; i < n; i++) {
        printf("%d ", a[i]);
    }
    for (int i = 0; i < k; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}
