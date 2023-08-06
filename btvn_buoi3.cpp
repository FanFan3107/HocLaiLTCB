#include <iostream>
#include <string.h>
using namespace std;

string inHoa(string strN)
{
    cin >> strN;
    for (int i = 0; i < strN.size(); i++)
    {
        if (strN[i] >= 'A' && strN[i] <= 'Z')
        {
            cout << strN[i];
        }
    }
}

string daonguoc(string strN)
{
    cin >> strN;
    int length = strN.length();
    string temp;
    for (int i = length - 1; i >= 0; i--)
    {
        temp.push_back(strN[i]);
    }
    cout << temp;
}

string doichu(string strN)
{
    cin >> strN;
    int length = strN.length();
    for (int i = 0; i <= length; i++)
    {
        if (i % 2 == 0)
            if (strN[i] >= 97 && strN[i] <= 122)
                strN[i] = strN[i] - 32;
        if (i % 2 == 1)
            if (strN[i] >= 65 && strN[i] <= 90)
                strN[i] = strN[i] + 32;
    }
    cout << strN;
}

string dem(string strN)
{
    int count = 0;
    int i = 0;
    cin >> strN;
    char ch;
    cin >> ch;
    while (strN[i] != '0')
    {
        if (strN[i] == ch)
            count++;

        i++;
    }
    if (count > 0)
        cout << count << " lan.";
    else
        cout << "Khong xuat hien trong chuoi.";
}

string nhieunhat(string strN)
{
    cin >> strN;
    int i, j, dem, max = 0;
    int length = strN.length();
    string giatri = "";
    for (i = 1; i < length; i++)
    {
        dem = 0;
        for (j = 1; j < length; j++)
        {
            if (strN[i] = strN[j])
            {
                dem++;
            }
            if (dem > max)
            {
                max = dem;
                giatri = strN[i];
            }
        }
    }
    cout << "Ky tu xuat hien nhieu nhat la " << strN[i];
}

int doixung(string strN)
{
    cin >> strN;
    int i;
    int n = strN.size();
    for (i = 0; i < n / 2; i++)
    {
        if (strN[i] == strN[n - i - 1])
            return 1;
        else
            return 0;
    }
}

string chenkytu(string strN)
{
    cin >> strN;
    string ch;
    cin >> ch;
    int pos;
    cin >> pos;
    strN.insert(pos, ch);
    cout << strN;
}

string xoakytu(string strN)
{
    cin >> strN;
    int pos1, pos2;
    cin >> pos1 >> pos2;
    strN.erase(pos1, pos2);
    cout << strN;
}
int main()
{
    string strN;
    char s;

    // inHoa(strN);

    // daonguoc(strN);

    // doichu(strN);

    // dem(strN);

    // nhieunhat(strN);

    // if(doixung(strN)==1)
    // cout<<"Chuoi doi xung";
    // else
    // cout<<"Chuoi khong doi xung";

    // chenkytu(strN);

    xoakytu(strN);
}