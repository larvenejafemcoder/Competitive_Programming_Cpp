#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        // leading tildes (~)
        for (j = 0; j < i; j++)
            printf("~");
        
        // fixed number of stars
        for (j = 0; j < n; j++)
            printf("*");

        printf("\n");
    }
    return 0;
}
