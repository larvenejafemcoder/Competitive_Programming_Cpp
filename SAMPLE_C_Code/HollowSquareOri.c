#include <stdio.h>

void s(int n)
{
    for (int i = 0; i < n; i++)               // Loop through each row
    {
        for (int j = 0; j < n; j++)           // Loop through each column
        {
            // Print '*' at borders, '.' inside
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                printf("*");
            else
                printf(".");
        }
        printf("\n");                         // Newline after each row
    }
}

int main()
{
    int n;
    scanf("%d", &n);                          // Input size of square
    s(n);                                     // Call function to print square
    return 0;
}
