#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[225];
    int n,i;

    cout<<"Input the length of your array"<<endl;
    cin>>n;
    cout<<"Input the the array"<<endl;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    sort(a + 1, a + 1 + n);
    cout << "Sorted array with the function sort(): ";
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
