#include <iostream>
using namespace std;
int demso(int n)
{
    int tong = 0;
    int x = n;
    while (x != 0)
    {
        tong += x % 10;
        x /= 10;
    }
    cout << "Tong la: " << tong<<endl;
    int dem = 0;
    while (n != 0)
    {
        n = n / 10;
        ++dem;
    }
    cout << "Co " << dem << " chu so.\n";
}

int main()
{
    int n;
    int dem = 0;
    cout << "Nhap so nguyen: ";
    cin >> n;
    demso(n);
}