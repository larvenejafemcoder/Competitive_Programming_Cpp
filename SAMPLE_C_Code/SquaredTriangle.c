#include <stdio.h>

void printRightAlignedTriangle(int n) {
    for (int i = n; i > 0; i--) {
        for (int j = i - 1; j > 0; j--)
            printf("~");
        for (int k = i - (i - 1); k <= n - (i - 1); k++)
            printf("*");
        printf("\n");
    }
}

void printLeftAlignedTriangle(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void printHollowLeftTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == 1 || i == n)
                printf("*");
            else
                printf(".");
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);

    printf("Right-Aligned Triangle:\n");
    printRightAlignedTriangle(n);

    printf("\nLeft-Aligned Triangle:\n");
    printLeftAlignedTriangle(n);

    printf("\nHollow Left-Aligned Triangle:\n");
    printHollowLeftTriangle(n);

    return 0;
}
