#include <bits/stdc++.h>
using namespace std;
int i,n;
int main(){
    cout<<"Nhap n, dua ra cac so la uoc cua 100 tu 1 den n"<<endl;
    cin>>n;
    for (i=1;i<=n;i++){
        if(100%i==0){
            cout<<i<<" ";
        }
    }
    return 0;
}
