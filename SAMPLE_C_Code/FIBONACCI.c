#include <stdio.h>

// Function to check if 'n' is a Fibonacci number
int main() {
    int n;
    scanf("%d", &n); // Input number to check

    int f1 = 0;
    int f2 = 1;
    int temp = 0;

    // Keep generating Fibonacci numbers until 'temp' >= n
    while (temp < n) {
        temp = f1 + f2;
        f1 = f2;
        f2 = temp;
    }

    // If match found, it's a Fibonacci number
    if (temp == n)
        printf("1\n"); // Yes
    else
        printf("0\n"); // No

    return 0;
}
