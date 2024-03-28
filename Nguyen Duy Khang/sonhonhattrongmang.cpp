#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int a[] = {3, 8, 9, 2, 10, 13, 14, 17};
    int n = 8;
    int m = a[0];
    for(int i = 0; i < n; i++)
    {
        if(a[i] < m)
        {
            m = a[i];
        }
    }
    cout<<m<<endl;
    return 0;
}