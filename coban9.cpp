#include <iostream>
using namespace std;
int main(){
    int n,s,t;
    cout<<"Nhap so: ";
    cin>>n;
    if (n>10){
        t = n % 10;
        n /= 10 ;
        s= t + n;
    }
    cout<<"Tong 2 chu so la: "<<s;
}