#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Loop through each row
    for (int row = 1; row <= n; row++) {
        
        // Print leading tildes to slant the parallelogram
        for (int space = 1; space <= n - row; space++) {
            printf("~");
        }

        // Print the hollow rectangle
        for (int col = 1; col <= n; col++) {
            if (row == 1 || row == n || col == 1 || col == n) {
                printf("*");
            } else {
                printf(".");
            }
        }

        printf("\n");
    }

    return 0;
}
