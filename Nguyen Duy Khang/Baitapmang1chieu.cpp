#include <iostream>
#include <vector>

using namespace std;

class Baitap1 
{
public:
    int n = 10;
    vector<int> a = {1, 2, 3, -4, -5, 6, 7, -8, 9, 15};

    void CauA() 
    {
        cout << "Output of question a is ";
        for (int i = 0; i < n; i++) 
        {
            if (a[i] < 0 && a[i] != 0) 
            {
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }

    void CauB() 
    {
        cout << "Output of question b is ";
        for (int i = 0; i < n; i++) 
        {
            if (a[i] % 2 != 0) 
            {
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }

    void CauC()
    {
        int s = 0;
        cout << "Output of question c is ";
        for (int i = 0; i < n; i++) 
        {
            if (a[i] % 3 == 0) 
            {
                s += a[i];
            }
        }
        cout << s << endl;
    }

    void CauD() 
    {
        int arr[] = {1, 5, 6, 12, 5};
        int m = 5;
        int j = 0;
        int k;
        cout << "Enter an integer K to find its position in the existing array: ";
        cin >> k;
        bool found = false;
        cout << "Output of question d is: ";
        for (int i = 0; i < m; i++) 
        {
            j++;
            if (arr[i] == k) 
            {
                cout << j << " ";
                found = true;
            }
        }
        if (!found) 
        {
            cout << "The number " << k << " is not found in the array.";
        }
        cout << endl;
    }
};

class Baitap2 
{
public:
    int arr2[10] = {1, 2, 3, -4, -5, 6, 7, -8, 9, 15};

    void Cau2Duong() 
    {
        cout << "Output of question 2 is: ";
        for (int i = 0; i < 10; i++) 
        {
            if (arr2[i] > 0) 
            {
                cout << arr2[i] << " ";
            }
        }
        cout << endl;
    }

    void Cau2Am() 
    {
        cout << "Output of question 2 is: ";
        for (int i = 0; i < 10; i++) 
        {
            if (arr2[i] < 0) 
            {
                cout << arr2[i] << " ";
            }
        }
        cout << endl;
    }
};

void DisplayResults() 
{
    Baitap1 obj1;
    Baitap2 obj2;
    int Bai;
    string Cau;
    cout << "Enter the question number you want to see the result for: ";
    cin >> Bai;
    cin.ignore();

    switch (Bai) 
    {
        case 1:
            cout << "Enter the sub-question you want to see the result for (a, b, c, d): ";
            cin >> Cau;
            if (Cau == "a") 
            {
                obj1.CauA();
            } 
            else if (Cau == "b") 
            {
                obj1.CauB();
            } 
            else if (Cau == "c") 
            {
                obj1.CauC();
            } 
            else if (Cau == "d") 
            {
                obj1.CauD();
            } 
            else 
            {
                cout << "Invalid sub-question choice.\n";
            }
            break;
        case 2:
            cout << "Enter the sub-question you want to see the result for (Duong, Am): ";
            cin >> Cau;
            if (Cau == "a") 
            {
                obj2.Cau2Duong();
            } 
            else if (Cau == "b") 
            {
                obj2.Cau2Am();
            } 
            else 
            {
                cout << "Invalid sub-question choice.\n";
            }
            break;
        default:
            cout << "Question number does not exist.\n";
            break;
    }
    return 0;
}

int main() 
{
    DisplayResults();
    return 0;
}
