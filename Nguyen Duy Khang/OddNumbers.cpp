#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    int n;
    
    cout << "Given the number N. Determine how many odd numbers there are in 1-N" << endl;
    cin >> n;

    for(int i=1; i<=n ;i+=2)
    {
        cout << i << " ";
    }

    cout << "\n";

    return 0;
}
