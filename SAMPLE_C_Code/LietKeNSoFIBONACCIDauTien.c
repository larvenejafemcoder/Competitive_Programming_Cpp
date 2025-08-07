#include <stdio.h>

// Function to return the nth Fibonacci number
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int prev = 0, curr = 1, next;

    for (int i = 2; i <= n; i++) {
        next = prev + curr;
        prev = curr;
        curr = next;
    }

    return curr;
}

int main() {
    int n;
    printf("Enter how many Fibonacci numbers to print: ");
    scanf("%d", &n);

    printf("First %d Fibonacci numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
