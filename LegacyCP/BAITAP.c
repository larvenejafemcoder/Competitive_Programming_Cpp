#include <stdio.h>    // printf, scanf
#include <stdlib.h>   // malloc, free, qsort
#include <string.h>   // strlen, memcpy, strcmp
#include <limits.h>   // INT_MIN
#include <math.h>     // sqrt, abs
#include <stdint.h>   // fixed-width ints
#include <stdbool.h>  // bool
#include <errno.h>    // errno
#include <unistd.h>
#include <fcntl.h>

void Bai1(void)
{
    int i;
    printf("Enter i in N, display all the odd value of N: ");
    scanf("%d", &i);

    if (i <= 0) return;

    int n[i];

    for (int j = 0; j < i; j++) {
        scanf("%d", &n[j]);
    }

    for (int a = 0; a < i; a++) {
        if (n[a] % 2 != 0) {
            printf("%d\n", n[a]);
        }
    }
}

int main()
{
    Bai1();
    return 0;
}
