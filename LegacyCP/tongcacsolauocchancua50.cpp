#include <bits/stdc++.h>
using namespace std;
int n,i;
int s=0;
int main(){
    cout<<"Nhap n, tinh tong cac so la uoc cua 50 tu 1 den n "<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
        if(50%i==0 && i%2==0)
            s=s+i;
            cout<<s;
    return 0;
}
