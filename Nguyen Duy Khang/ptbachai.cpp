#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main(){
    float x1,x2,x;
    float a,b,c,delta;
    delta=b*b-4*a*c;
    cout<<"Nhap he so a"<<endl;
    cin>>a;
    cout<<"Nhap he so b"<<endl;
    cin>>b;
    cout<<"Nhap he so c"<<endl;
    cin>>c;
    cout<<"Nhap gia tri delta"<<endl;
    cin>>delta;
    if (delta>0)
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        cout<<"PT co 2 nghiem x1="<<x1<<" x2="<<x2<<endl;
    if (delta==0)
        x=-b/2*a;
        cout<<"PT co nghiem kep x="<<x<<endl;
    return 0;

}
