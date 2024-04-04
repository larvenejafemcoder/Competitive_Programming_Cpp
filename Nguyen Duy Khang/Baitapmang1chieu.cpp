#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

class Baitap1
{
public:
    int n = 10;
    vector<int> a = {1, 2, 3, -4, -5, 6, 7, -8, 9, 15};

    void CauA()
    {
        cout<<"Output cua cau a la ";
        for(int i = 0; i < n; i++)
        {
            
            if(a[i]<0 && a[i]!=0)
            {
                
                cout<<a[i]<<" ";
            }
        }
        cout<<" "<<endl;
    }

    void CauB()
    {
        cout<<"Output cua cau b la ";
        for(int i = 0; i < n; i++)
        {
            if(a[i]%2!=0)
            {
                cout<<a[i]<<" ";
            }
        }
        cout<<" "<<endl;
    }

    void CauC()
    {
        int s=0;
        cout<<"Output cua cau c la ";
        for(int i = 0; i < n; i++)
        {
            if(a[i]%3==0)
            {
                s = s + a[i];
            }
        }
        cout<<s<<endl;
    }

    void CauD() 
    {
        int arr[] = {1, 5, 6, 12, 5};
        int k;
        int m = 5;
        int j = 0;
        cout << "Nhap mot so nguyen K de tim vi tri cua K trong mang da co: ";
        cin >> k;
        cout << "Output cua cau d la: ";
        bool found = false;
        for (int i = 0; i < m; i++) {
            j++;
            if (arr[i] == k) {
                cout << j << " ";
                found = true;
            }
        }
        if (!found) {
            cout << "Khong tim thay " << k << " trong mang.";
        }
        cout << endl;
    }
};

void CoiKetQua() 
{
    Baitap1 obj;
    int Bai;
    string Cau = "";
    cout << "Ban muon coi ket qua bai nao: ";
    cin >> Bai;
    cin.ignore(); // To clear the newline character from the input buffer

    switch (Bai) 
    {
        case 1:
            cout << "Ban muon coi cau nao: ";
            cin >> Cau;
            if (Cau == "a") 
            {
                obj.CauA(); // Call the function CauA from Baitap1 object
            } 
            else if (Cau == "b") 
            {
                obj.CauB(); // Call the function CauB from Baitap1 object
            } 
            else if (Cau == "c") 
            {
                obj.CauC(); // Call the function CauC from Baitap1 object
            } 
            else if (Cau == "d") 
            {
                obj.CauD(); // Call the function CauD from Baitap1 object
            } 
            else 
            {
                cout << "Lua chon cau khong hop le.\n";
            }
            break;
        default:
            cout << "Bai khong ton tai.\n";
            break;
    }
}

int main()
{
    CoiKetQua();
    return 0;
}
