#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[] = {9, 7, 4, 8, 2, 5, 6, 10};
    int n = 8;
    int i, j, jmin;
    for (i = 0; i < n - 1; i++)
    {
        jmin = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[jmin])
            {
                jmin = j;
            }
        }
        if (jmin != i)
        {
            swap(a[jmin], a[i]);
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
