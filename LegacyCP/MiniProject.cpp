#include <iostream>
#include <limits>
#include <vector>
using namespace std;

// ====== Function Prototypes ======
void gradeCheckerProgram();
void multiplesOfFiveProgram();
void whileLoopSimulation();
float calculateAverage(const vector<float>& grades);
float inputGrade(int subjectNumber);

// ====== MAIN ======
int main() {
    int choice;

    cout << "===== MAIN MENU =====\n";
    cout << "1. Student Grade Checker\n";
    cout << "2. Count multiples of 5 up to n\n";
    cout << "3. While Loop Simulation\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        gradeCheckerProgram();
    } else if (choice == 2) {
        multiplesOfFiveProgram();
    } else if (choice == 3) {
        whileLoopSimulation();
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}

// ====== PROGRAMS ======

void gradeCheckerProgram() {
    cout << "\n=== STUDENT GRADE CHECKER ===\n";

    int numSubjects;
    cout << "Enter how many subjects you want to input: ";
    cin >> numSubjects;

    // Validate subject count
    while (cin.fail() || numSubjects <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid number, try again: ";
        cin >> numSubjects;
    }

    vector<float> grades;
    for (int i = 1; i <= numSubjects; i++) {
        grades.push_back(inputGrade(i));
    }

    float average = calculateAverage(grades);

    cout << "Your average score is: " << average << endl;

    if (average >= 9)
        cout << "Excellent! You're a top student!" << endl;
    else if (average >= 8)
        cout << "Good job! You're above average." << endl; 
    else if (average >= 6.5)
        cout << "You're average. Keep working harder!" << endl; 
    else if (average >= 5)
        cout << "You're below average. Study more!" << endl; 
    else
        cout << "You failed. Try again next time!" << endl; 
}

void multiplesOfFiveProgram() {
    cout << "\n=== MULTIPLES OF 5 COUNTER ===\n";

    int n;
    cout << "Enter an integer n: ";
    cin >> n;

    while (cin.fail() || n < 1) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input, please enter a positive integer: ";
        cin >> n;
    }

    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 5 == 0) count++;
    }

    cout << "There are " << count << " multiples of 5 between 1 and " << n << "." << endl;
}

void whileLoopSimulation() {
    cout << "\n=== WHILE LOOP SIMULATION ===\n";

    int number = 1;

    while (number <= 5) {
        cout << "The number is " << number << endl;
        number = number + 1;
    }
}

// ====== HELPERS ======

float calculateAverage(const vector<float>& grades) {
    float sum = 0;
    for (float g : grades) {
        sum += g;
    }
    return sum / grades.size();
}

float inputGrade(int subjectNumber) {
    float grade;
    while (true) {
        cout << "Enter grade for Subject " << subjectNumber << ": ";
        cin >> grade;

        if (cin.fail() || grade < 0 || grade > 10) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input (must be 0-10), try again!\n";
        } else {
            break;
        }
    }
    return grade;
}
