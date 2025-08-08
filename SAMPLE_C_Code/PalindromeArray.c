#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t); // Read number of test cases

    while (t--)
    {
        int n;
        scanf("%d", &n); // Read size of the array

        int a[100]; // Declare array (maximum size 100)

        // Read n elements into the array
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        int m = 0; // Counter to detect mismatched pairs

        // Check if the array is a palindrome
        for (int i = 0; i < n; i++)
        {
            if (a[i] != a[n - 1 - i]) // Compare symmetric elements
                m++; // If mismatch found, increase counter
        }

        // If no mismatches, it's a palindrome
        if (m == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
