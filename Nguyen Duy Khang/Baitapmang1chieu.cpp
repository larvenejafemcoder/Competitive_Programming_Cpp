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
        for(int i = 0;i < n;i++) 
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
        for(int i = 0;i < n;i++) 
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
        for(int i = 0;i < n;i++) 
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
        for(int i = 0;i < m;i++) 
        {
            j++;
            if(arr[i] == k) 
            {
                cout << j << " ";
                found = true;
            }
        }
        if(!found) 
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
        for(int i = 0; i < 10; i++) 
        {
            if(arr2[i] > 0) 
            {
                cout << arr2[i] << " ";
            }
        }
        cout << endl;
    }

    void Cau2Am() 
    {
        cout << "Output of question 2 is: ";
        for(int i = 0; i < 10; i++) 
        {
            if (arr2[i] < 0) 
            {
                cout << arr2[i] << " ";
            }
        }
        cout << endl;
    }
};

class Baitap3
{
public:
    int arr3[100];
    int n3;
    int i;
    void Cau3()
    {
        cout<<"Input the length of your array"<<endl;
        cin>>n3;
        cout<<"Input the array"<<endl;
        for(i=0; i<n3; i++)
        {
            cin>>arr3[i];
        }
        cout << "Output of the array: ";
        for(int i = 0;i < n3; i++)
        {
            cout << arr3[i] << " ";
        }
        cout << endl;
        int max = arr3[0]; // Initialize max with the first element
        for(i=1; i<n3; i++)
        {
            if(arr3[i] > max)
            {
                max = arr3[i]; // Update max if a larger element is found
            }
        }
        cout << "Maximum element in the array: " << max << endl;
    }
};

class Baitap4 
{
public:
    int arr4[100];
    int n4, i;

    void enterArray() 
    {
        cout << "Input the length of array: ";
        cin >> n4;
        cout << "Input the array to see whether the array can be an arithmetic progression or geometric progression: " << endl;
        for (i = 0; i < n4; i++) 
        {
            cin >> arr4[i];
        }
        for (i = 0; i < n4; i++) 
        {
            cout << arr4[i]<<" ";
        }
    };

    void Cau4() 
    {
    enterArray();
    bool isAProg = true; // Assume it's an arithmetic progression initially
    bool isGProg = false; // Assume it's not a geometric progression initially

    if(n4 >= 2)
    {
        int a_com_diff = arr4[1] - arr4[0]; // Calculate common difference
        int g_com_diff = arr4[1] / arr4[0]; // Calculate common ratio

        for(i = 1; i < n4 - 1; i++) 
        {
            if (arr4[i + 1] - arr4[i] != a_com_diff) 
            {
                isAProg = false; // If any difference doesn't match, it's not an AP
            }
            else
            {
                isAProg = true;
            }
        }

        for(i = 1; i < n4 - 1; i++) 
        {
            if (arr4[i + 1] / arr4[i] != g_com_diff)
            {
                isGProg = false; // If any ratio doesn't match, it's not a GP
            }
            else
            {
                isGProg = true;
            }
        }
    } 
    else 
    {
        isAProg = false; // If there are less than 2 elements, it's not an AP
    }

    if(isAProg == true && isGProg == true) 
    {
        cout << "The array is both an arithmetic and geometric progression." << endl;
    } 
    else if(isAProg == true) 
    {
        cout << "The array is an arithmetic progression." << endl;
    } 
    else if(isGProg == true) 
    {
        cout << "The array is a geometric progression." << endl;
    } 
    else 
    {
        cout << "The array is neither an arithmetic progression nor a geometric progression." << endl;
    }
}

};

void DisplayResults() 
{
    Baitap1 obj1;
    Baitap2 obj2;
    Baitap3 obj3;
    Baitap4 obj4;
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
        case 3:
            obj3.Cau3();
            break;
        default:
            cout << "Question number does not exist.\n";
            break;
    }
};

int main() 
{
    //DisplayResults();
    Baitap4 obj;
    obj.Cau4();
    return 0;
}
