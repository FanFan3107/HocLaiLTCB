#include <iostream>
using namespace std;
int pay(int& days, char& tags)
{
    int pays;
    if (days < 12)
    {
        if (tags == 'A')
        {
            pays = days * 250000;
        }
        else if (tags == 'B')
        {
            pays = days * 200000;
        }
        else if (tags == 'C')
        {
            pays = days * 150000;
        }
    }
    else
    {
        if (tags == 'A')
        {
            pays = days * 250000 * 0.1;
        }
        else if (tags == 'B')
        {
            pays = days * 200000 * 0.08;
        }
        else if (tags == 'C')
        {
            pays = days * 1500000.08;
        }
    }
    cout<<"So tien thue la: "<<pays<<" VND";
}

int main()
{
    int days;
    char tags;
    cout << "Nhap so ngay thue: ";
    cin >> days >> tags;
    pay(days, tags);
}