#include <stdio.h>

int main() {
    int width, height;
    scanf("%d %d", &width, &height);

    for (int row = 0; row < height; row++) {
        for (int col = 0; col < width; col++) {
            if (row == 0 || row == height - 1 || col == 0 || col == width - 1)
                putchar('*');
            else
                putchar(' ');
        }
        putchar('\n');
    }

    return 0;
}
