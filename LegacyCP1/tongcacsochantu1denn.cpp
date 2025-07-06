#include <bits/stdc++.h>
using namespace std;
int n,i;
int s=0;
int main(){
    cout<<"Nhap n.Tinh tong cac so chan tu 1 den n "<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
        if(i%2==0)s+=i;
        cout<<s;

    return 0;
}

