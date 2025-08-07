#include <stdio.h>

int main() {
    int rows, cols;

    // Input number of rows (height) and columns (width)
    scanf("%d %d", &rows, &cols);

    for (int i = 1; i <= rows; i++) {
        // Print leading tildes (~) for indentation
        for (int j = 1; j < i; j++) {
            printf("~");
        }

        // Print asterisks (*) for the rectangle body
        for (int k = 1; k <= cols; k++) {
            printf("*");
        }

        // New line for next row
        printf("\n");
    }

    return 0;
}