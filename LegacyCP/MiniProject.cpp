#include <iostream>
#include <limits>
#include <vector>
using namespace std;

// ====== Function Prototypes ======
void gradeCheckerProgram();
void multiplesOfFiveProgram();
void whileLoopSimulation();
void forLoopSimulation();
void AVERAGE();
float calculateAverage(const vector<float>& grades);
float inputGrade(int subjectNumber);

// ====== MAIN ======
int main() {
    int choice;

    cout << "===== MAIN MENU =====\n";
    cout << "1. Student Grade Checker\n";
    cout << "2. Count multiples of 5 up to n\n";
    cout << "3. While Loop Simulation\n";
    cout << "4. For Loop Simulation\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        AVERAGE();
    } else if (choice == 2) {
        multiplesOfFiveProgram();
    } else if (choice == 3) {
        whileLoopSimulation();
    } else if (choice == 4){
        forLoopSimulation();
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}

// ====== PROGRAMS ======

void AVERAGE() {
        // Input for Math grade
    int a,b,c;
    while (true) {
        cout << "PLEASE ENTER YOUR 1ST SUBJECT GRADE: ";
        cin >> a;
        if (cin.fail()) {
            cin.clear();  // Clear input buffer
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore incorrect input
            cout << "OOF! Invalid, try again!" << endl;
        } else {
            break;
        }
    }

    // Input for second subject
    while (true) {
        cout << "PLEASE ENTER YOUR 2ND SUBJECT GRADE: ";
        cin >> b;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid, try again!" << endl;
        } else {
            break;
        }
    }

    // Input for third subject
    while (true) {
        cout << "ENTER YOUR 3RD SUBJECT GRADE: ";
        cin >> c;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input, try again!" << endl;
        } else {
            break;
        }
    }
    cout << "CONSOLE PROGRAM TO DETERMINE HOW GOOD OF A STUDENT YOU ARE IN ASIA" << endl;

    // Calculate average
    int tb = (a + b + c) / 3;

    // Determine the student's performance
    if(tb >= 9)
        cout << "NICE!" << endl;
    else if (tb >= 8)
        cout << "YOU'RE AVERAGE" << endl; 
    else if (tb >= 6.5)
        cout << "YOU'RE BELLOW AVERAGE" << endl; 
    else if (tb >= 5)
        cout << "DON'T GO HOME TILL YOU'RE AVERAGE" << endl; 
    else
        cout << "KYS!" << endl; 
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

void forLoopSimulation(){
    //for loops

    int number = 10;

    for(int i=1;i<=number;i++){
        cout << i << endl;
    }
    cout<<"Counted to ten!";
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
