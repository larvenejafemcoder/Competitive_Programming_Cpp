#include <iostream>
#include <string>
#include <limits>
using namespace std;

#ifdef _WIN32
#define CLEAR_SCREEN "cls"
#else
#define CLEAR_SCREEN "clear"
#endif

bool continueProgram();

void EvenOrOdd(); // Function prototype
void SumOfNum();  // Function prototype

int main()
{
    string Function = "";
    do {
        cout << "What program would you like to enter? :" << endl;
        cout << "1. EvenOrOdd" << endl;
        cout << "2. SumOfNum" << endl;

        while (Function == "")
        {
            cout << "Please choose a function to continue with" << endl;
            getline(cin, Function);
        }

        switch (stoi(Function)) {
        case 1:
            EvenOrOdd();
            break;
        case 2:
            SumOfNum();
            break;
        default:
            cout << "Invalid, please enter a number to fit the program" << endl;
            return 0; // Exit the program
        }

    } while (continueProgram());

    return 0;
}

bool continueProgram()
{
    char choice;
    cout << "Would you like to continue the program? (Y/N): ";
    cin >> choice;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer

    // Clear screen
    system(CLEAR_SCREEN);

    return (choice == 'Y' || choice == 'y');
}

void EvenOrOdd()
{
    string s;
    cout << "Type in an input number to see if it's odd or even: ";
    getline(cin, s);

    while (s == "")
    {
        cout << "Invalid input, please type in the number: " << endl;
        getline(cin, s);
    }

    bool isNum = true;
    for (char c : s)
    {
        if (!isdigit(c) && c != '-')
        {
            isNum = false;
            break;
        }
    }

    if (isNum)
    {
        int a = stoi(s);
        if (a % 2 == 0)
        {
            cout << "Even" << endl;
        }
        else
        {
            cout << "Odd" << endl;
        }
    }
    else
    {
        cout << "Invalid input, not a number." << endl;
    }
}

void SumOfNum()
{
    int i;
    string n = "";
    int e = 0;
    cout << "Enter n. Calculate the sum of numbers from 1 to n: " << endl;
    getline(cin, n);
    while (n == "")
    {
        cout << "Invalid input. Please type a number" << endl;
        getline(cin, n);
    }
    int f = stoi(n);
    for (i = 1; i <= f; i++)
    {
        if (i % 2 == 1)
        {
            e += i;
        }
    }
    cout << "The sum of numbers from 1 to n " << f << " is: " << e << endl;
}
