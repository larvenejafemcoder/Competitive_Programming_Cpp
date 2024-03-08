#include <bits/stdc++.h>
using namespace std;
int i,n;
int main(){
    cout<<"Nhap so nguyen n. Dua ra cac so chan tu 1 den n "<<endl;
    cin>>n;
    for (i=1;i<=n;i++) {
        if(i%2==0){
            cout<<i<<" ";
        }
    }
    return 0;
}
