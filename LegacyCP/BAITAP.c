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
    printf("Enter i in N, display all the odd values of N: ");
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

void Bai2(void)
{
    int i;
    printf("Enter i in N, display all the negative values of N: ");
    scanf("%d", &i);

    if (i <= 0) return;

    int n[i];

    for (int j = 0; j < i; j++) {
        scanf("%d", &n[j]);
    }

    for (int a = 0; a < i; a++) {
        if (n[a] < 0 ){
            printf("%d\n", n[a]);
        }
    }
}

void Programme()
{
    int a;
    printf("Choose a programme to run: ");
    scanf("%d",&a);
    switch (a) {
    case 1:
        Bai1();
        break;

    case 2:
        Bai2();
        break;

    default:
        printf("Invalid Choice");
        break;
    }
}

int main()
{
    Programme();
    return 0;
}
