#include <stdio.h>

int main() {
    int a, b, c;

    // Input three integers
    scanf("%d %d %d", &a, &b, &c);

    // Find minimum of the three
    int min = (a < b) ? a : b;
    min = (min < c) ? min : c;

    // Output the result
    printf("%d\n", min);

    return 0;
}
