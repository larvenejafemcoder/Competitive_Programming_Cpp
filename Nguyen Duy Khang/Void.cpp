#include <iostream>
#include <string>
#include <limits>
using namespace std;

void EvenOrOdd(); // Function prototype
void SumOfNum(); // Function prototype

int main()
{
    SumOfNum();
    return 0;

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
    int a = 0;
    cout << "Nhap n. Tinh tong cac so le tu 1 den n: " << endl;
    getline(cin, n);
    while (n == "") {
        cout << "Invalid input. Please type a number" << endl;
        getline(cin, n);
    }
    int f = stoi(n);
    for (i = 1; i <= f; i++) 
    {
        if (i % 2 == 1) 
        {
            a += i;
        }
    }
    cout << "Tong cac so le tu 1 den " << f << " la: " << a << endl;
}