#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Given a number N. Determine how many numbers are divisible by 2:\n";
    cin >> n;

    vector<int> divisibleByTwo;
    for (int i = 2; i <= n; i += 2) {
        divisibleByTwo.push_back(i);
    }

    for (int num : divisibleByTwo) {
        cout << num << " ";
    }
    
    cout << '\n';
    return 0;
}
