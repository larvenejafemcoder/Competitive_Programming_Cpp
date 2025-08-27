#include <iostream>
#include <cmath>
using namespace std;

/*
 * FUNCTION DEFINITIONS:
 * 
 * sumOfNumbers() - Calculates sum of all integers from 1 to n using formula n*(n+1)/2
 * 
 * sumOfOddNumbers() - Calculates sum of all odd numbers from 1 to n using iteration
 * 
 * sumOfEvenNumbers() - Calculates sum of all even numbers from 1 to n using iteration
 * 
 * sumOfOddDivisorsOf50() - Finds and sums all odd divisors of 50 within range 1 to n
 * 
 * sumOfAllDivisorsOf50() - Finds and sums all divisors of 50 within range 1 to n
 * 
 * sumOfEvenDivisorsOf50() - Finds and sums all even divisors of 50 within range 1 to n
 * 
 * sumOfOddMultiplesOf3() - Finds and sums all odd multiples of 3 within range 1 to n
 * 
 * sumOfAllMultiplesOf3() - Finds and sums all multiples of 3 within range 1 to n
 * 
 * sumOfEvenMultiplesOf5() - Finds and sums all even multiples of 5 within range 1 to n
 * 
 * addTwoNumbers() - Takes two numbers as input and calculates their sum
 * 
 * calculatePower() - Calculates a^n where a is base and n is exponent using pow() function
 * 
 * calculateAverage() - Takes two numbers and calculates their arithmetic mean
 * 
 * gcd(int a, int b) - Returns Greatest Common Divisor of two integers using Euclidean algorithm
 * 
 * displayMenu() - Shows the main menu with all available mathematical operations
 * 
 * OddNumbers() - Displays all odd numbers from 1 to n in sequence
 * 
 * PolyEquation() - Solves quadratic equations of the form ax²+bx+c=0 using discriminant
 */

// Function declarations
void sumOfNumbers();
void sumOfOddNumbers();
void sumOfEvenNumbers();
void sumOfOddDivisorsOf50();
void sumOfAllDivisorsOf50();
void sumOfEvenDivisorsOf50();
void sumOfOddMultiplesOf3();
void sumOfAllMultiplesOf3();
void sumOfEvenMultiplesOf5();
void addTwoNumbers();
void calculatePower();
void calculateAverage();
int gcd(int a, int b);
void displayMenu();
void OddNumbers();
void PolyQuadraticEquation();

int main() {
    int choice;
    
    do {
        displayMenu();
        cout << "Enter your choice (1-15, 0 to exit): ";
        cin >> choice;
        cout << "\n";
        
        switch(choice) {
            case 1: sumOfNumbers(); break;
            case 2: sumOfOddNumbers(); break;
            case 3: sumOfEvenNumbers(); break;
            case 4: sumOfOddDivisorsOf50(); break;
            case 5: sumOfAllDivisorsOf50(); break;
            case 6: sumOfEvenDivisorsOf50(); break;
            case 7: sumOfOddMultiplesOf3(); break;
            case 8: sumOfAllMultiplesOf3(); break;
            case 9: sumOfEvenMultiplesOf5(); break;
            case 10: addTwoNumbers(); break;
            case 11: calculatePower(); break;
            case 12: calculateAverage(); break;
            case 13: {
                cout << "GCD of 25 and 10 is: " << gcd(25, 10) << endl;
                break;
            }
            case 14: OddNumbers(); break;
            case 15: PolyQuadraticEquation(); break;
            case 0: 
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
        cout << "\n" << string(50, '-') << "\n";
    } while(choice != 0);
    
    return 0;
}

void displayMenu() { // Displays the main menu with all available mathematical operations
    cout << "=== MATHEMATICAL OPERATIONS MENU ===" << endl;
    cout << "1.  Sum of numbers from 1 to n" << endl;
    cout << "2.  Sum of odd numbers from 1 to n" << endl;
    cout << "3.  Sum of even numbers from 1 to n" << endl;
    cout << "4.  Sum of odd divisors of 50 from 1 to n" << endl;
    cout << "5.  Sum of all divisors of 50 from 1 to n" << endl;
    cout << "6.  Sum of even divisors of 50 from 1 to n" << endl;
    cout << "7.  Sum of odd multiples of 3 from 1 to n" << endl;
    cout << "8.  Sum of all multiples of 3 from 1 to n" << endl;
    cout << "9.  Sum of even multiples of 5 from 1 to n" << endl;
    cout << "10. Add two numbers" << endl;
    cout << "11. Calculate power (a^n)" << endl;
    cout << "12. Calculate average of two numbers" << endl;
    cout << "13. Find GCD of 25 and 10" << endl;
    cout << "14. Display odd numbers from 1 to n" << endl;
    cout << "15. Solve quadratic equation (ax²+bx+c=0)" << endl;
    cout << "0.  Exit" << endl;
}

void sumOfNumbers() { // Calculates sum of all integers from 1 to n using the formula n*(n+1)/2
    int n;
    cout << "Enter integer n to calculate sum from 1 to n: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return;
    }
    
    // Using formula: n*(n+1)/2
    long long sum = static_cast<long long>(n) * (n + 1) / 2;
    cout << "Sum of numbers from 1 to " << n << " = " << sum << endl;
}

void sumOfOddNumbers() { // Calculates sum of all odd numbers from 1 to n by iterating through odd numbers only
    int n;
    cout << "Enter n to calculate sum of odd numbers from 1 to n: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return;
    }
    
    long long sum = 0;
    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }
    cout << "Sum of odd numbers from 1 to " << n << " = " << sum << endl;
}

void sumOfEvenNumbers() { // Calculates sum of all even numbers from 1 to n by iterating through even numbers only
    int n;
    cout << "Enter n to calculate sum of even numbers from 1 to n: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return;
    }
    
    long long sum = 0;
    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }
    cout << "Sum of even numbers from 1 to " << n << " = " << sum << endl;
}

void sumOfOddDivisorsOf50() { // Finds all odd numbers that divide 50 evenly within range 1 to n and sums them
    int n;
    cout << "Enter n to find sum of odd divisors of 50 from 1 to n: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return;
    }
    
    long long sum = 0;
    cout << "Odd divisors of 50 in range 1 to " << n << ": ";
    for (int i = 1; i <= n; i++) {
        if (50 % i == 0 && i % 2 == 1) {
            sum += i;
            cout << i << " ";
        }
    }
    cout << "\nSum = " << sum << endl;
}

void sumOfAllDivisorsOf50() { // Finds all numbers that divide 50 evenly within range 1 to n and sums them
    int n;
    cout << "Enter n to find sum of all divisors of 50 from 1 to n: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return;
    }
    
    long long sum = 0;
    cout << "Divisors of 50 in range 1 to " << n << ": ";
    for (int i = 1; i <= n; i++) {
        if (50 % i == 0) {
            sum += i;
            cout << i << " ";
        }
    }
    cout << "\nSum = " << sum << endl;
}

void sumOfEvenDivisorsOf50() { // Finds all even numbers that divide 50 evenly within range 1 to n and sums them
    int n;
    cout << "Enter n to find sum of even divisors of 50 from 1 to n: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return;
    }
    
    long long sum = 0;
    cout << "Even divisors of 50 in range 1 to " << n << ": ";
    for (int i = 1; i <= n; i++) {
        if (50 % i == 0 && i % 2 == 0) {
            sum += i;
            cout << i << " ";
        }
    }
    cout << "\nSum = " << sum << endl;
}

void sumOfOddMultiplesOf3() { // Finds all odd multiples of 3 within range 1 to n and sums them
    int n;
    cout << "Enter n to find sum of odd multiples of 3 from 1 to n: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return;
    }
    
    long long sum = 0;
    cout << "Odd multiples of 3 in range 1 to " << n << ": ";
    for (int i = 3; i <= n; i += 6) {  // Start at 3, increment by 6 to get odd multiples
        sum += i;
        cout << i << " ";
    }
    cout << "\nSum = " << sum << endl;
}

void sumOfAllMultiplesOf3() { // Finds all multiples of 3 within range 1 to n and sums them
    int n;
    cout << "Enter n to find sum of all multiples of 3 from 1 to n: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return;
    }
    
    long long sum = 0;
    cout << "Multiples of 3 in range 1 to " << n << ": ";
    for (int i = 3; i <= n; i += 3) {
        sum += i;
        cout << i << " ";
    }
    cout << "\nSum = " << sum << endl;
}

void sumOfEvenMultiplesOf5() { // Finds all even multiples of 5 within range 1 to n and sums them
    int n;
    cout << "Enter n to find sum of even multiples of 5 from 1 to n: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return;
    }
    
    long long sum = 0;
    cout << "Even multiples of 5 in range 1 to " << n << ": ";
    for (int i = 10; i <= n; i += 10) {  // Start at 10, increment by 10
        sum += i;
        cout << i << " ";
    }
    cout << "\nSum = " << sum << endl;
}

void addTwoNumbers() { // Takes two numbers as input and calculates their sum
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    double sum = a + b;
    cout << "Sum = " << sum << endl;
}

void calculatePower() { // Calculates a^n where a is base and n is exponent using the pow() function
    double a;
    int n;
    cout << "Enter base (a) and exponent (n): ";
    cin >> a >> n;
    
    double result = pow(a, n);
    cout << a << "^" << n << " = " << result << endl;
}

void calculateAverage() { // Takes two numbers and calculates their arithmetic mean (average)
    double a, b;
    cout << "Enter two numbers to calculate average: ";
    cin >> a >> b;
    double average = (a + b) / 2.0;
    cout << "Average = " << average << endl;
}

// Returns the Greatest Common Divisor of two integers using the recursive Euclidean algorithm
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

void OddNumbers() { // Displays all odd numbers from 1 to n in sequence
    int n;
    cout << "Enter number N to display all odd numbers from 1 to N: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return;
    }
    
    cout << "Odd numbers from 1 to " << n << ": ";
    int count = 0;
    for(int i = 1; i <= n; i += 2) {
        cout << i << " ";
        count++;
    }
    cout << "\nTotal count of odd numbers: " << count << endl;
}

void PolyQuadraticEquation() { // Solves quadratic equations of the form ax²+bx+c=0 using discriminant analysis
    double a, b, c, delta;
    double x, x1, x2;
    
    cout << "Solving quadratic equation: ax² + bx + c = 0" << endl;
    cout << "Enter coefficient a: ";
    cin >> a;
    
    if (a == 0) {
        cout << "This is not a quadratic equation (a cannot be 0)!" << endl;
        return;
    }
    
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
    cin >> c;
    
    // Calculate discriminant
    delta = b * b - 4 * a * c;
    cout << "Discriminant (Δ) = " << delta << endl;
    
    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Equation has 2 distinct real roots:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (delta == 0) {
        x = -b / (2 * a);
        cout << "Equation has one repeated root:" << endl;
        cout << "x = " << x << endl;
    }
    else {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-delta) / (2 * a);
        cout << "Equation has 2 complex roots:" << endl;
        cout << "x1 = " << realPart << " + " << imagPart << "i" << endl;
        cout << "x2 = " << realPart << " - " << imagPart << "i" << endl;
    }
}