#include <iostream>
using namespace std;
#include <cmath>

int main() {
    int x1,y1,x2,y2;
    cout<<"Nhap toa do x1 : ";
    cin>>x1;
    cout<<"Nhap toa do y1 : ";
    cin>>y1;
    cout<<"Nhap toa do x2 : ";
    cin>>x2;
    cout<<"Nhap toa do y2 : ";
    cin>>y2;
    cout<<"He so goc la: "<<(y2-y1)/(x2-x1)<<"\n";
    cout<<"Khoang cach = "<<sqrt(abs(y2-y1))+abs(x2-x1);
}