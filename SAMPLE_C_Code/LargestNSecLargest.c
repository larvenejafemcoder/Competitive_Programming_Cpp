#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n); // Read the number of elements

    int a[100]; // Declare an array to hold up to 100 integers

    // Input the array elements
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Step 1: Find the largest number (max)
    int max = a[0]; // Start by assuming the first element is the largest
    for(int j = 1; j < n; j++)
    {
        if(a[j] > max) // If a larger number is found, update max
            max = a[j];
    }

    // Step 2: Find the second largest number (max2)
    int max2 = a[0]; // Start from the first element again
    for(int k = 0; k < n; k++)
    {
        // Check if current element is less than max and greater than current max2
        if(a[k] > max2 && a[k] < max)
            max2 = a[k];
    }

    // Output the largest and second largest numbers
    printf("%d %d", max, max2);

    return 0;
}
