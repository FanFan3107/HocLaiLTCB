#include <iostream>
using namespace std;
int main()
{
    int n,a,b,p,s;
    cout<<"Nhap so can kiem tra: ";
    cin>>n;
    if(n>=10 && n<99){
        a=n%10;
        b=n/10;
        s=2*(a+b);
        p=a*b;
        if(s==p)
        {
            cout<<"So nguyen thoa dieu kien: "<<n<<endl;
        }
        else
        {
            cout<<"So khong thoe dieu kien.";
        }
        }
    }