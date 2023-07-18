#include <iostream>
using namespace std;
int main()
{
    char n;
    int a;
    cout<<"Nhap ky tu: ";
    cin>> n;
    cout<<"Ma ASCII cua "<<n<< " la: "<<(int)n;
    n++;
    cout<<"\nMa ASCII cua "<<n<< " ke tiep la: "<<(int)n<<endl;

    cout<<"Nhap chu so: ";
    cin>> a;
    cout<<"Ma ASCII cua "<<a<< " la: "<<a;
    a++;
    cout<<"\nMa ASCII cua "<<a<< " ke tiep la: "<<a;
}