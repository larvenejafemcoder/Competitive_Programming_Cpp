#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
    cout<<"Viet chuong trinh nhap vao so tu nhien N roi thong bao len man hinh so do co phai la so nguyen hay khong"<<endl;
    cin >> n;
    if(n < 2){
        cout << n << " khong phai so nguyen to"<<endl;
        return 0;
    }
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        cout << n << " la so nguyen to"<<endl;
    }else{
        cout << n << " khong phai so nguyen to"<<endl;
    }

    return 0;
}
