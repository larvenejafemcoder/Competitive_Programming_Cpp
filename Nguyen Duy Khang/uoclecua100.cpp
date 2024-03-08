#include <bits/stdc++.h>
using namespace std;
int i,n;
int sum =0;
int main(){
    cout<<"Nhap n, dua ra cac so la uoc le cua 100"<<endl;
    cin>>n;
    for (i=1;i<=n;i++){
        if(100%i==0 && i%2==1){
            sum=sum+i;
            cout<<sum<<endl;
        }
    }
    return 0;
}
