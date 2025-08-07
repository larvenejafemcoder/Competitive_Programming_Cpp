#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    int lastDigit = number % 10;
    int firstDigit = number;

    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    printf("First digit: %d, Last digit: %d\n", firstDigit, lastDigit);
    return 0;
}
