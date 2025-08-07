#include <stdio.h>

// Function to input array elements
void input(int a[], int n)
{
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

// Function to output the smallest and second smallest elements
void output(int a[], int n)
{
    int min1 = a[0]; // Assume first element is the smallest initially

    // Find the smallest element in the array
    for (int i = 0; i < n; i++)
    {
        if (min1 >= a[i])
            min1 = a[i];
    }

    int min2 = a[1]; // Start from second element (not necessarily correct!)
    
    // Find the second smallest element that is greater than min1
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= min2 && a[i] > min1)
            min2 = a[i];
    }

    // Output the two smallest distinct values
    printf("%d %d", min1, min2);
}

int main()
{
    int n;
    scanf("%d", &n); // Read size of array

    int a[100]; // Array with max size 100

    input(a, n); // Input array elements
    output(a, n); // Output the two smallest distinct elements

    return 0;
}
