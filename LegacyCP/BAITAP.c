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

typedef struct {
    int count;
    int values[100];
} Entity;

void Element(Entity *e)
{
    printf("Enter number of elements: ");
    scanf("%d", &e->count);

    if (e->count <= 0) return;

    for (int i = 0; i < e->count; i++) {
        scanf("%d", &e->values[i]);
    }
}
void Bai1(const Entity *e)
{
    for (int a = 0; a < e->count; a++) {
        if (e->values[a] % 2 != 0) {
            printf("%d\n", e->values[a]);
        }
    }
}

void Bai2(const Entity *e)
{
    for (int a = 0; a < e->count; a++) {
        if (e->values[a] % 2 == 0) {
            printf("%d\n", e->values[a]);
        }
    }
}

void Bai3(const Entity *e)
{
    for (int a = 0; a < e->count; a++) {
        if (e->values[a] > 0) {
            printf("%d\n", e->values[a]);
        }
    }
}

void Bai4(const Entity *e)
{
    for (int a = 0; a < e->count; a++) {
        if (e->values[a] < 0) {
            printf("%d\n", e->values[a]);
        }
    }
}

void Programme()
{
    Entity e;
    int choice;

    printf("Choose a programme to run:\n");
    printf("1.Odd numbers \n");
    printf("2.Even numbers \n");
    printf("3.Positive numbers \n");
    printf("4.Negative numbers \n");

    scanf("%d", &choice);

    switch (choice) {
    case 1:
        Element(&e);
        Bai1(&e);
        break;
    case 2:
        Element(&e);
        Bai2(&e);
        break;
    case 3:
        Element(&e);
        Bai3(&e);
        break;
    case 4:
        Element(&e);
        Bai4(&e);
        break;
    default:
        printf("Invalid Choice\n");
        break;
    }
}

int main()
{
    Programme();
    return 0;
}
