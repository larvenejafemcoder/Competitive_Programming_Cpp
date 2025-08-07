#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n); // Read the number of elements

    int a[100]; // Array to store up to 100 integers

    // Input n elements into the array
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Sort the array in ascending order using simple selection sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // Swap if element at i is greater than element at j
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Print all even numbers in sorted order
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            printf("%d ", a[i]);
    }

    // Print all odd numbers in sorted order
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
            printf("%d ", a[i]);
    }

    return 0;
}
