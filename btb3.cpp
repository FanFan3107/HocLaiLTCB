#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

char lowercase(char a)
{
nhaplai:
    cout << "Nhap ky tu: ";
    cin >> a;
    if (a >= 'a' && a <= 'z')
    {
        cout << "Vui long nhap lai.\n";
        goto nhaplai;
    }
    else
    {
        a = tolower(a);
        cout << a;
    }
}

int ptbn(int a, int b, double x)
{
    cout << "Nhap 2 so a, b: ";
    cin >> a >> b;
    if (a == 0)
    {
        if (b == 0)
        {
            cout << "Phuong trinh vo so nghiem.";
        }
        else
        {
            cout << "Phuong trinh vo nghiem.";
        }
    }
    else
    {
        x = (double)-b / a;
        cout << "Phuong trinh co nghiem la: " << x;
    }
}

int ptb2(float a, float b, float c, float x1, float x2)
{
    do
    {
        cout << "Nhap 3 so a,b,c : ";
        cin >> a >> b >> c;
    } while (!a);

    float delta = b * b - 4 * a * c;
    if (delta < 0)
    {
        x1 = x2 = 0.0;
        return 0;
    }
    else if (delta == 0)
    {
        x1 = x2 = -b / (2 * a);
        return 1;
    }
    else
    {
        delta = sqrt(delta);
        x1 = (-b + delta) / (2 * a);
        x2 = (-b - delta) / (2 * a);
        return 2;
    }
}

int min(int a, int b, int c, int d)
{

    cout << "Nhap 4 so nguyen:";
    cin >> a >> b >> c >> d;
    if (a < b && a < c && a < d)
    {
        cout << "Min la: " << a;
    }
    else if (b < a && b < c && b < d)
    {
        cout << "Min la: " << b;
    }
    else if (c < a && c < b && c < d)
    {
        cout << "Min la: " << c;
    }
    else
    {
        cout << "Min la: " << d;
    }
}

int hoanvi(int a, int b)
{
    cout << "Nhap 2 so nguyen: ";
    cin >> a >> b;
    int temp = a;
    a = b;
    b = temp;
    cout << a << "  " << b;
}

int tangdan(int a, int b, int c, int d)
{
    int temp;
    cout << "Nhap 4 so nguyen : ";
    cin >> a >> b >> c >> d;
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if (a > d)
    {
        temp = a;
        a = d;
        d = temp;
    }
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    if (b > d)
    {
        temp = b;
        b = d;
        d = temp;
    }
    if (c > d)
    {
        temp = c;
        c = d;
        d = temp;
    }
    cout << a << " " << b << " " << c << " " << d;
}
int main()
{
    int a, b, c, d, x;
    float a1, b1, c1, x1, x2;
    char n;
    // lowercase(n);
    // ptbn(a, b, x);

    // int y = ptb2(a1, b1, c1, x1, x2);
    // if (y == 0)
    // {
    //     cout << "Phuong trinh da cho vo nghiem";
    // }
    // else if (y == 1)
    // {
    //     cout << "Phuong trinh da cho co nghiem kep " << x1;
    // }
    // else
    // {
    //     cout << "Phuong trinh da cho co hai nghiem phan biet" << endl;
    //     cout << "x1=" << x1 << endl;
    //     cout << "x2=" << x2 << endl;
    // }

    // min(a, b, c, d);

    // hoanvi(a, b);

    // tangdan(a,b,c,d);
}