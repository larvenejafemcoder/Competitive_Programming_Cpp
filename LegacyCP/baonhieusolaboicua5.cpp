#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,n,dem=0;
    cout<<"Nhap so nguyen n, co bao nhieu so tu 1 den n la boi cua 5"<<endl;
    cin>>n;

    for(i=1;i<=n;i++) if(i%5==0) dem++;
    cout<<dem;
    return 0;
}
