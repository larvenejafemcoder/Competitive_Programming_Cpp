#include <iostream>

using namespace std;

// cin >> (insertion input operator)
// cout << (extraction output operator)

int main()
{
    string name;
    int age;

    cout << "What is your name, mate?" << endl; // Asking the user's name
    getline(cin >> ws, name); //Getting user's input

    cout << "What is your age? " << endl; // Asking the user's age
    cin >> age; //Getting user's input

    cout << "Hello! " << name << endl; // Hello "user"
    cout << "You are " << age << " years old "<< endl; // You are "age" years old

    return 0;
}