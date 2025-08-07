#include <stdio.h>

int main()
{
    int m;
    scanf("%d", &m); // Read the number of test cases

    while (m--) // Loop over each test case
    {
        int n;
        scanf("%d", &n); // Read the size of the array

        int a[1000]; // Declare the array with max size 1000

        // Input the array elements
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        // Loop through the array and print only even numbers
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0) // Check if the number is even
                printf("%d ", a[i]); // Print the even number
        }

        printf("\n"); // Print a newline after each test case
    }

    return 0;
}
