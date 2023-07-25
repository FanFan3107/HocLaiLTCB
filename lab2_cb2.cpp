#include <iostream>
using namespace std;

bool so_nguyento(int &n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Nhap so: ";
    cin >> n;
    if (so_nguyento(n))
    {
        cout << "la so nguyen to\n";
    }
    else
    {
        cout << "khong la so nguyen to\n";
    }
}