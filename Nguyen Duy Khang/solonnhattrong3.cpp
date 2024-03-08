#include <bits/stdc++.h>
using namespace std;
int a,b,c;
int main(){
    cout<<"Nhap ba so tim so lon nhat  "<<endl;
    cin>>a>>b>>c;
    if (a>b && a>c)cout<<"So lon nhat la  "<<a;
    else if (b>a && b>c) cout<<"So lon nhat la  "<<b;
    else if (c>a && c>b) cout<<"So lon nhat la  "<<c;
    else if (a=b=c) cout<<"Cac so bang nhau";
    return 0;
}
