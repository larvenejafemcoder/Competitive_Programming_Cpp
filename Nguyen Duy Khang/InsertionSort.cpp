#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a[225];
    int n,i,j;
    cout<<"Input the length of your array"<<endl;
    cin>>n;
    cout<<"Input the the array"<<endl;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n;i++) //Runs from index of 1 to (n-1)th number in the array
    {
        int key = a[i]; //Store the index of array a[]
        j = i - 1; //Starts the comparison with the element immediately to the left of the current element i
 
        // Move elements of a[0..i-1],
        // that are greater than key, 
        // to one position ahead of their
        // current position
        while (j >= 0 && a[j] > key) //Ensuring the correct position for insertion is found within the sorted subarray.
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key; //Assigning a[j+1] to key
    }
    for (int i = 0; i < n; i++) //Loops to print out the sorted array a[]
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
