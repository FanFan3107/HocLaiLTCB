#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int sosanh(int a, int b)
{
    if (a > b)
    {
        cout << b;
    }
    else
    {
        cout << a;
    }
}
int ucln(int a, int b)
{
    if (a == 0 || b == 0)
    {
        cout << a + b;
    }
    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    cout << a;
}

int bcnn(int a, int b)
{
    int boi = 1, max;
    if (a == 0 || b == 0)
    {
        cout << "khong co boi chung.";
    }
    else
    {
        if (a > b)
            max = a;
        else
            max = b;
    }
    int i = max;
    while (1)
    {
        if (i % a == 0 && i % b == 0)
        {
            boi = i;
            break;
        }
        i += max;
    }
    cout << "BCNN la: " << i;
}

int tinh(int n)
{
    int i = 1, s = 1;
    if (n < 1)
    {
        cout << "Vui long nhap lai.";
        return 0;
    }
    else
    {
        while (i <= n)
        {
            s *= i;
            i++;
        }
        cout << s;
    }
}

int tinhx(int a, int b)
{
    float kq = pow(a, b);
    cout << kq;
}

int tinhtohop(int a, int b)
{
    int kq;
    kq = (tinh(a)) / (tinh(b) * (tinh(a - b)));
    cout << kq;
}

int chuvi(int a, int b)
{
    int kq;
    kq = (a + b) * 2;
    cout << kq << endl;
}
int dientich(int a, int b)
{
    int kq;
    kq = a * b;
    cout << kq << endl;
}

int vehinh(int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (i == 0 || i == a - 1 || j == 0 || j == b - 1)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << "\n";
    }
}

int sohoanhao(int a)
{
    int sum = 0;
    for (int i = 1; i <= a / 2; i++)
    {
        if (a % i == 0)
            sum += i;
    }
    if (sum == a)
        return 1;
    else
        return 0;
}

int tinhtien(int a)
{
    int t50 = a / 50000;
    a -= 50000 * t50;
    int t20 = a / 20000;
    a -= 20000 * t20;
    int t10 = a / 10000;
    a -= 10000 * t10;
    int t5 = a / 5000;
    a -= 5000 * t5;
    int t2 = a / 2000;
    a -= 2000 * t2;
    int t1 = a / 1000;
    a -= 1000 * t1;
    cout << "So cac loai menh gia: ";
    cout << "So to 50000: " << t50 << endl;
    cout << "So to 20000: " << t20 << endl;
    cout << "So to 10000: " << t10 << endl;
    cout << "So to 5000: " << t5 << endl;
    cout << "So to 2000: " << t2 << endl;
    cout << "So to 1000: " << t1 << endl;
}

int daonguoc(int a)
{
    int tmp;

    int res = 0;
    while (a > 0)
    {
        tmp = a % 10;
        res = res * 10 + tmp;
        a = a / 10;
    }
    cout << res;
}

char demkt(char chuoi[100]){
    int i;
    int dem=0;
    for(i=0;i<strlen(chuoi);i++){
        if(chuoi[i]==' ')
        dem++;
    }
    return dem;
}
int main()
{
    char chuoi[100];
    int a, b, c;
    // cout << "Nhap so : ";
    // cin >> a;

    // sosanh(a,sosanh(b,c));

    // ucln(a, b);

    // bcnn(a,b);

    // tinh(a);

    // tinhx(a,b);

    // tinhtohop(a,b);

    // chuvi(a,b);

    // dientich(a,b);

    // vehinh(a,b);

    // if(sohoanhao(a)==1){
    //     cout<<"So da nhap la so hoan hao.";
    // }
    // else {
    //     cout<<"So da nhap khong la so hoan hao.";
    // }

    // tinhtien(a);

    // daonguoc(a);

    gets(chuoi);
    demkt(chuoi);
    

}