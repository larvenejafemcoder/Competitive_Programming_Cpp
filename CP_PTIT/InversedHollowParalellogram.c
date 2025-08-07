#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    for (int i = 1; i <= rows; i++) {
        // Print leading tildes (~)
        for (int space = 1; space < i; space++) {
            printf("~");
        }

        // Print stars (*) and dots (.) for hollow effect
        for (int col = 1; col <= cols; col++) {
            if (i == 1 || i == rows || col == 1 || col == cols) {
                printf("*");
            } else {
                printf(".");
            }
        }

        printf("\n");
    }

    return 0;
}
