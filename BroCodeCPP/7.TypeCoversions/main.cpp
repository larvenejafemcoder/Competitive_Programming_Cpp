#include <iostream>

using namespace std;

int main() 
{
    // type conversion = conversion of one data type to another
    //                 Implicit = automatic
    //                 Explicit = Precede value with new data type (int)

    double x = (int) 3.14;

    char c = 100;


    cout << x << endl;
    cout << c << endl;

    cout << (char) 100 << endl;


    // Lets say we have a small test that we want to grade
    int correct = 8;
    int questions = 10;
    
    double grade = (double)correct/questions * 100;

    cout << grade << "%";

    return 0;
}