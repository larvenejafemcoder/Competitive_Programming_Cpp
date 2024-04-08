#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <climits>

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
    int arr3[50];
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
    int arr4[50];
    int n4, i;

    void enterArray() 
    {
        cout << "Input the length of array: ";
        cin >> n4;
        cout << "Input the array to see whether the array can be an arithmetic progression or geometric progression: " << endl;
        for(i = 0;i < n4;i++) 
        {
            cin >> arr4[i];
        }
        for(i = 0;i < n4;i++) 
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

class Baitap5
{
public:
    int arr5[50];
    int n5,i,j;

    void Cau5()
    {
        cout << "Input the length of array: ";
        cin >> n5;
        cout << "Input the array" << endl;
        for (i = 0; i < n5; i++) 
        {
            cin >> arr5[i];
        }
        for (i = 0; i < n5; i++) 
        {
            cout << arr5[i]<<" ";
        }
        cout<<endl;
        //Ex : 3 2 4 6 5 => Goal : 6 5 4 3 2
        for(i=1;i<=n5;i++) 
        {
            int key = arr5[i]; // index 1 => 2
            j = i - 1; // index 0 => 3
            while (j >= 0 && arr5[j] < key) // 3 < 2
            {
                arr5[j + 1] = arr5[j]; // index 1=2 => index 0=3
                j = j - 1; // index 3
            }
            arr5[j + 1] = key; 
        }
        for (int i = 0; i < n5; i++) 
        {
            cout << arr5[i] << " ";
        }
    }

};

class Baitap6
{
public:
    int arr6[50];
    int n6,i;
    bool isSymmetric = false;
    void Cau6()
    {
        cout << "Input the length of array: ";
        cin >> n6;
        cout << "Input the array" << endl;
        for (i = 0; i < n6; i++) 
        {
            cin >> arr6[i];
        }
        for (i = 0; i < n6; i++) 
        {
            cout << arr6[i]<<" ";
        }
        cout<<endl;
        for(int i = 0; i < n6/2; i++)
        {
            if(arr6[i] != arr6[n6 - i - 1])
            {
                isSymmetric = false;
            }
            else
            {
                isSymmetric = true;
            }
        }
        if(isSymmetric==true)
        {
            cout<<"The array is symmetric"<<endl;
        }
        else
        {
            cout<<"The array is not symmetric"<<endl;
        }
    };
};

class Baitap7
{
public:
    // Hàm kiểm tra xem số có thỏa mãn điều kiện không xem có đủ 3 chữ số không
    bool Check(int n)
    {
        int preDigit = 10; // Đảm bảo giá trị lớn nhất mà một chữ số có thể có là 9.
        int count = 0;
        while (n > 0) //Duyệt qua các chữ số của n
        {
            int k = n % 10; // Lấy chữ số cuối cùng của n
            n /= 10; // Loại bỏ chữ số cuối cùng
            count++;
            if(k >= preDigit) // Nếu chữ số hiện tại không tăng so với chữ số trước đó
            {
                return 0; // Cho false
            }
            preDigit = k; // Cập nhật chữ số trước đó cho lần lặp tiếp theo
            if(count > 3) // Nếu đã kiểm tra hơn 3 chữ số
            {
                return 0; // Cho false
            }
        }
         // Nếu đã kiểm tra xong và không có lỗi nào xảy ra, trả về true
        return count == 3; // Kiểm tra xem có đủ 3 chữ số không
    }

    // Hàm đếm số lượng số thỏa mãn điều kiện
    int cntIncTriplets(const vector<int>& arr7) 
    {
        int count = 0; // Cho đếm bằng 0
        for(int num : arr7) 
        {
            if(Check(num))
            {
                count++;
            }
        }
        return count;
    }

    void Cau7() 
    {
        int n7;
        cout << "Input the length of array: ";
        cin >> n7;

        vector<int> arr7(n7);
        cout << "Input the array of positive integers: ";
        for(int i = 0; i < n7; ++i) 
        {
            cin >> arr7[i];
        }

        int result = cntIncTriplets(arr7);
        cout << "The amount of numbers that meets the 2 given conditions: " << result << endl;
    }
};

class Baitap8 
{
public:
    vector<int> createUniqueSet(const vector<int>& arr8) 
    {
        vector<int> uniqueSet;
        
        // Iterate through each element in the input vector
        for(int num : arr8) 
        {
            // If the element doesn't exist in the uniqueSet, add it
            if(find(uniqueSet.begin(), uniqueSet.end(), num) == uniqueSet.end()) 
            {
                uniqueSet.push_back(num);
            }
        }
        
        return uniqueSet;
    };

    void Cau8() 
    {
        int n8;
        int i,j,jmin;
        cout << "Input the length of array: ";
        cin >> n8;

        // Input vector
        vector<int> arr8(n8);

        cout << "Input the array: ";
        for(i = 0; i < n8; ++i) 
        {
            cin >> arr8[i];
        }

        for (i = 0; i < n8 - 1; i++)
        {
            jmin = i;
            for (j = i + 1; j < n8; j++)
            {
                if (arr8[j] < arr8[jmin])
                {
                    jmin = j;
                }
            }
            if (jmin != i)
            {
                swap(arr8[jmin], arr8[i]);
            }
        }

        for(i = 0; i < n8; ++i) 
        {
            cout << arr8[i] << " ";
        }
        cout << endl;
        
        // Call the function to create a set of unique elements
        vector<int> uniqueSet = createUniqueSet(arr8);
        
        // Print the count of unique elements in the set
        cout << "Count of existed number in array: " << uniqueSet.size() << endl;
    }
};

class Baitap9
{
public:
    int arr9[50];
    int n9,i;
    void Cau9() 
    {
        cout << "Input the length of array: ";
        cin >> n9;

        cout << "Input the array: " << endl;
        for(i = 0; i < n9; ++i) 
        {
            cin >> arr9[i];
        }
        for(i = 0; i < n9; ++i)
        {
            cout << arr9[i] << " ";
        }
        cout << endl;
        unordered_map<int, int> counts;
        for (i = 0; i < n9; i++) 
        {
            counts[arr9[i]]++;
        }
        
        int maxCount = max_element(counts.begin(), counts.end(), 
            [](const auto& a, const auto& b){
                return a.second < b.second;
            })->second;
        
        vector<pair<int, int>> largestCounts;
        for(const auto& pair : counts) 
        {
            if (pair.second == maxCount) 
            {
                largestCounts.push_back(pair);
            }
        }

        if (!largestCounts.empty()) 
        {
            cout << "SO HANG XUAT HIEN NHIEU NHAT LA SO: " << largestCounts[0].first << ", SO LAN XUAT HIEN LA: " << largestCounts[0].second;
            if (largestCounts[0].second == 1) 
            {
                cout << " LAN" << endl;
            } else {
                cout << " LAN" << endl;
            }
        }
    }
};

class Baitap10
{
public:
    int arr10[50];
    int n10,i;
    void Cau10()
    {
        cout << "Input the length of array: ";
        cin >> n10;
        cout << "Input the array" << endl;
        for(i = 0; i < n10; i++) 
        {
            cin >> arr10[i];
        }
        for(i = 0; i < n10; i++) 
        {
            cout << arr10[i] <<" ";
        }
        cout << endl;
        int largest_negative = INT_MIN; // Initialize with the smallest possible integer

        for(int i = 0; i < n10; i++) 
        {
            if(arr10[i] < 0) 
            {
                if(arr10[i] > largest_negative) 
                {
                    largest_negative = arr10[i];
                }
            }
        }

        if(largest_negative != INT_MIN) 
        {
            cout << "Largest negative number: " << largest_negative << endl;
        } 
        else 
        {
            cout << "No negative numbers found in the array." << endl;
        }
    }
};

void DisplayResults() 
{
    Baitap1 obj1;
    Baitap2 obj2;
    Baitap3 obj3;
    Baitap4 obj4;
    Baitap5 obj5;
    Baitap6 obj6;
    Baitap7 obj7;
    Baitap8 obj8;
    Baitap9 obj9;
    Baitap10 obj10;
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
        case 4:
            obj4.Cau4();
            break;
        case 5:
            obj5.Cau5();
            break;
        case 6:
            obj6.Cau6();
            break;
        case 7:
            obj7.Cau7();
            break;
        case 8:
            obj8.Cau8();
            break;
        case 9:
            obj9.Cau9();
            break;
        case 10:
            obj10.Cau10();
            break;
        default:
            cout << "Question number does not exist.\n";
            break;
    }
};

int main() 
{
    DisplayResults();
    return 0;
}
