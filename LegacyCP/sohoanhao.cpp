#include <bits/stdc++.h>
using namespace std;
bool check(int a){
    int sum = 0;//khai báo biến sum
    for(int i=1;i<=a/2;i++){ //tạo vòng lặp for để tìm ước số của a
        if(a%i==0)
            sum+=i; //tổng các ước số của a
    }
    if(sum==a) return true; // trả về true
    return false; // ngược lại trả về false
}
int main(){
    cout<<"Viet chuong trinh kiem tra xem mot so dc nhap vao tu ban phim co phai la so hoan hao hay ko?"<<endl;
    int n;
    printf("Nhap vao so can kiem tra: ");
    scanf("%d", &n);
    if (check(n)){
        printf("%d la so hoan hao.",n);
    }
    else {
        printf("%d ko la so hoan hao.",n);
    }
    return 0;
}
