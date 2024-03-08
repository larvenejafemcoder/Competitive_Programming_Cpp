#include <bits/stdc++.h>
using namespace std;
float a,b,tb;
int main(){
    cout<<"Nhap diem so cua hai mon toan van "<<endl;
    cin>>a>>b;
    tb=(a+b)/2;
    if (tb >= 8)cout<<"Hoc sinh gioi";
    else if (tb < 8 && tb >= 6.5)cout<<"Hoc sinh kha";
    else if (tb <6.5 && tb >= 5)cout<<"Hoc sinh trung binh";
    else if (tb < 5)cout<<"Hoc sinh yeu";
    return 0;
}
