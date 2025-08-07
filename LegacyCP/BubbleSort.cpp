#include <iostream>

using namespace std;

int main()
{
    int A[] = {9, 5, 4, 1, 3, 2, 6, 8, 7};
    int i,j,n;
    cout<<"Enter the length of the array"<<endl;
    cin>>n;
    for(i=0; i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if (A[i] > A[j])
            {
                // Swap elements A[i] and A[j]
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    cout << "Array after Sorting will be: ";
    for (i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}