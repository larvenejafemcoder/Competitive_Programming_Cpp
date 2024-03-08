#include <bits/stdc++.h>
using namespace std;
int i,n;
int main(){
    cout<<"Nhap n, dua ra cac so la uoc chan cua 100"<<endl;
    cin>>n;
    for (i=1;i<=n;i++){
        if(100%i==0 && i%2==0){
            cout<<i<<" ";
        }
    }
    return 0;
}
