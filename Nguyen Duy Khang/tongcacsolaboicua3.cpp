#include <bits/stdc++.h>
using namespace std;
int n,i;
int s=0;
int main(){
    cout<<"Nhap n, tinh tong cac so la boi so cua 3 tu 1 den n "<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
        if(i%3==0)
            s=s+i;
            cout<<s;

}
