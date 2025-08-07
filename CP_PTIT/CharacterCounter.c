#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = 0; // Strip newline

    int d = 0, s = 0, kt = 0;

    for (int i = 0; i < strlen(a); i++) {
        if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z'))
            d++;
        else if (a[i] >= '0' && a[i] <= '9')
            s++;
        else
            kt++;
    }

    printf("%d %d %d\n", d, s, kt);
    return 0;
}
