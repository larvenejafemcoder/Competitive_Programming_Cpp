#include <bits/stdc++.h>
using namespace std;
int i,n;
int main(){
    cout<<"Nhap n, dua ra cac boi so le cua 3 tu 1 den n"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        if(i%2==1 && i%3==0){
            cout<<i<<" ";
        }
    }
    return 0;
}

