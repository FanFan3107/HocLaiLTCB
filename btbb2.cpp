#include <iostream>
#include <math.h>
using namespace std;

int sumN(int n)
{
    float S;
    S = 0;
    do
    {
        cout << "Nhap so duong n: ";
        cin >> n;
        if (n < 1)
            cout << "Nhap lai ! ";

    } while (n < 1);

    for (int i = 1; i <= n; i++)
    {
        S = S + 1.0 / (2 * i);
    }
    cout << S;
}

int sumM(int m)
{
    long S = 0, P = 1;
    do
    {
        cout << "Nhap so M: ";
        cin >> m;
        if (m < 1)
            cout << "Vui long nhap lai !";

    } while (m < 1);
    for (int i = 1; i <= m; i++)
    {
        P = P * i;
        S = S + P;
    }
    cout << S;
}

int checkPr(int n)
{

    if (n < 2)
    {
        return 0;
    }

    int i;
    int squareRoot = (int)sqrt(n);
    for (i = 2; i <= squareRoot; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int sumP(int n)
{
    int so;
    int soTemp;
    int tong = 0;
    cout << "Nhap so: ";
    cin >> so;
    soTemp = so;
    while (soTemp != 0)
    {
        tong += soTemp % 10;
        soTemp /= 10;
    }
    cout << "Tong cac chu so cua so " << so << " la " << tong << endl;
}

int ucln(int a, int b)
{
    int min, ucln = 1;

    cout << "Nhap so thu nhat: ";
    cin >> a;
    cout << "Nhap so thu hai: ";
    cin >> b;
    if (a == 0 && b == 0)
    {
        cout << "Hai so 0 khong co uoc chung lon nhat" << endl;
    }
    else if (a != 0 && b == 0)
    {
        cout << "Uoc chung lon nhat cua " << a << " va " << b << " la " << abs(a) << endl;
    }
    else if (a == 0 && b != 0)
    {
        cout << "Uoc chung lon nhat cua " << a << " va " << b << " la " << abs(b) << endl;
    }
    else
    {
        if (a < b)
        {
            min = a;
        }
        else
        {
            min = b;
        }

        for (int i = 1; i <= min; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                ucln = i;
            }
        }
        cout << "Uoc chung lon nhat cua " << a << " va " << b << " la " << ucln << endl;
    }
}

int main()
{
    int a;
    int b;
    // sumN(a);
    // sumM(a);
    // sumP(a);
    // ucln(a,b);

    // do
    // {
    //     cout << "Nhap so : ";
    //     cin >> a;
    //     if (a > 100)
    //         cout << "Nhap lai ";
    //     return 0;
    // } while (a < 100);

    // cout << "Tat ca cac so nguyen to nho hon " << a << " la: ";
    // if (a >= 2)
    // {
    //     cout << "2";
    // }
    // for (int i = 3; i < a; i += 2)
    // {
    //     if (checkPr(i) == 1)
    //     {
    //         cout << i << " ";
    //     }
    // }
}