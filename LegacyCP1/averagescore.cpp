#include <bits/stdc++.h>

using namespace std;

float a, b, c, tb;

void Grading();

int main() {
    cout << "CONSOLE PROGRAM TO DETERMINE HOW GOOD OF A STUDENT YOU ARE IN ASIA" << endl;

    Grading();

    // Calculate average
    tb = (a + b + c) / 3;

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

    return 0;
}

void Grading()
{

    
    // Input for Math grade
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
}