#include <bits/stdc++.h>
using namespace std;

/*
 * Definition:
 * A divisor of a number is an integer that divides the number exactly
 * (with no remainder). 
 * Example: Divisors of 100 are 1, 2, 4, 5, 10, 20, 25, 50, 100.
 */

// Function to print all divisors of 100 up to n
void printAllDivisors(int n) {
    cout << "\n🔹 All divisors of 100 from 1 to " << n << ": ";
    for (int i = 1; i <= n; i++) {
        if (100 % i == 0) {   // if i divides 100 with no remainder
            cout << i << " ";
        }
    }
    cout << "\n";
}

// Function to print odd divisors of 100 up to n and calculate their sum
void printOddDivisorsAndSum(int n) {
    int sum = 0;
    cout << "\n🔸 Odd divisors of 100 from 1 to " << n 
         << " (with running sum):\n";
    for (int i = 1; i <= n; i++) {
        if (100 % i == 0 && i % 2 == 1) { // divisor AND odd
            sum += i;
            cout << "Divisor: " << i 
                 << " | Current sum: " << sum << "\n";
        }
    }
    cout << "👉 Final sum of odd divisors = " << sum << "\n";
}

// Function to print even divisors of 100 up to n
void printEvenDivisors(int n) {
    cout << "\n🔹 Even divisors of 100 from 1 to " << n << ": ";
    for (int i = 1; i <= n; i++) {
        if (100 % i == 0 && i % 2 == 0) { // divisor AND even
            cout << i << " ";
        }
    }
    cout << "\n";
}

int main() {
    cout << "📘 Definition: A divisor of 100 is a number that divides 100 "
         << "with no remainder.\n";
    cout << "This program will list divisors of 100 up to n, "
         << "show odd divisors with their sum, and even divisors.\n\n";

    int n;
    cout << "Enter n: ";  // user input upper limit
    cin >> n;

    // Call each function
    printAllDivisors(n);
    printOddDivisorsAndSum(n);
    printEvenDivisors(n);

    return 0;
}
