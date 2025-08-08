#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n); // Read the number of elements

    int a[n]; // Declare an array of size n

    // Read n integers into the array
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int count = 0; // Variable to count how many prime numbers are found

    // First loop: Count prime numbers in the array
    for (int i = 0; i < n; i++)
    {
        int flag = 0; // Flag to check if current number is not prime

        // Check if a[i] has any divisors from 2 to a[i] - 1
        for (int j = 2; j < a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                flag = 1; // Not a prime number
                break;
            }
        }

        // If flag is still 0 and number is greater than 1, it's a prime
        if (flag == 0 && a[i] > 1)
            count++; // Increase prime count
    }

    printf("%d ", count); // Print how many prime numbers were found

    // Second loop: Print the prime numbers
    for (int i = 0; i < n; i++)
    {
        int flag = 0; // Reset flag for each number

        // Check if a[i] has any divisors from 2 to a[i] - 1
        for (int j = 2; j < a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                flag = 1; // Not a prime number
                break;
            }
        }

        // If it's a prime, print it
        if (flag == 0 && a[i] > 1)
            printf("%d ", a[i]);
    }

    return 0;
}
