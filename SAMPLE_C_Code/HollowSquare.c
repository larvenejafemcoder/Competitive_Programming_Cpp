#include <stdio.h>

void printHollowSquare(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Print '*' if we're on the border
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter square size: ");
    scanf("%d", &n);
    printHollowSquare(n);
    return 0;
}
