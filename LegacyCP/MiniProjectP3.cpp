#include <iostream>
#include <cmath>
using namespace std;

// Perfect number check
bool isPerfect(int a) {
    int sum = 0;
    for (int i = 1; i <= a / 2; i++) {
        if (a % i == 0) sum += i;
    }
    return sum == a;
}

// Max of two numbers
int maxOfTwo(int a, int b) {
    if (a > b) return a;
    if (b > a) return b;
    return a; // equal, return either
}

// Max of three numbers
int maxOfThree(int a, int b, int c) {
    int m = a;
    if (b > m) m = b;
    if (c > m) m = c;
    return m;
}

// Max in array
int maxInArray(int a[], int n) {
    int m = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > m) m = a[i];
    }
    return m;
}

// Min in array
int minInArray(int a[], int n) {
    int m = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < m) m = a[i];
    }
    return m;
}

// Prime check
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    cout << "=== MENU ===\n";
    cout << "1. Check perfect number\n";
    cout << "2. Max of 2 numbers\n";
    cout << "3. Max of 3 numbers\n";
    cout << "4. Max in array\n";
    cout << "5. Min in array\n";
    cout << "6. Check prime number\n";
    cout << "Enter choice: ";

    int choice;
    cin >> choice;

    if (choice == 1) {
        int n;
        cout << "Enter number: ";
        cin >> n;
        if (isPerfect(n)) cout << n << " is a perfect number\n";
        else cout << n << " is not a perfect number\n";

    } else if (choice == 2) {
        int a, b;
        cout << "Enter two numbers: ";
        cin >> a >> b;
        if (a == b) cout << "Both numbers are equal: " << a << endl;
        else cout << "Max = " << maxOfTwo(a, b) << endl;

    } else if (choice == 3) {
        int a, b, c;
        cout << "Enter three numbers: ";
        cin >> a >> b >> c;
        cout << "Max = " << maxOfThree(a, b, c) << endl;

    } else if (choice == 4) {
        int a[] = {3, 8, 9, 2, 1, 10, 13, 14, 17};
        int n = sizeof(a) / sizeof(a[0]);
        cout << "Max in array = " << maxInArray(a, n) << endl;

    } else if (choice == 5) {
        int a[] = {3, 8, 9, 2, 10, 13, 14, 17};
        int n = sizeof(a) / sizeof(a[0]);
        cout << "Min in array = " << minInArray(a, n) << endl;

    } else if (choice == 6) {
        int n;
        cout << "Enter number: ";
        cin >> n;
        if (isPrime(n)) cout << n << " is prime\n";
        else cout << n << " is not prime\n";

    } else {
        cout << "Invalid choice!\n";
    }

    return 0;
}
