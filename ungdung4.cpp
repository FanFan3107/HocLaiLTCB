#include <iostream>
using namespace std;
int main()
{
    double r1, r2, r3,rt ;
    cout<<"Nhap hieu dien tro R1: ";
    cin>>r1;
    cout<<"Nhap hieu dien tro R2: ";
    cin>>r2;
    cout<<"Nhap hieu dien tro R3: ";
    cin>>r3;
    rt=(r1*r2*r3)/(r2*r3+r1*r3+r1*r2);
    cout<<"Tong hieu dien tro la: "<<rt<< endl;
}