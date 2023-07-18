#include <iostream>
using namespace std;
int main() {
    int a,b,c,d,f;
    char n[100];
    cout<<"***BAI TAP THUC HANH MON LAP TRINH C***\n";
    cout<<"***************TUAN 1******************\n";
    cout<<"MSSV:";
    cin>>n;
    cout<<"Ho va Ten: ";
    cin>>n;
    cout<<"Lop: ";
    cin>>n;
    cout<<"Khoa: ";
    cin>>n;
    cout<<"Nam hoc: ";
    cin>>n;
    cout<<"**Bang diem**\n";
    cout<<"Mon 1: ";
    cin>>a;
    cout<<"Mon 2: ";
    cin>>b;
    cout<<"Mon 3: ";
    cin>>c;
    cout<<"Mon 4: ";
    cin>>d;
    cout<<"Mon 5: ";
    cin>>f;
    double e=(double) (a+b+c+d+f)/5;
    cout<<"Diem trung binh la: "<<(double) e;
}