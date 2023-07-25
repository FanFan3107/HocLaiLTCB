#include <iostream>
using namespace std;
int tinhtien(int giobd, int giokt)
{
    int giosd;
    int tien;
    giosd = (giobd-giokt +24)%24;
    if (giobd >= 7 && giokt < 17)
    {
        tien=giosd*400;
        if (giosd > 6)
        {
            tien *= 0.9;
        }
        
    }
    else if (giobd >= 17 && giokt <= 24)
    {
        tien= giosd * 350;
        if (giosd >4 )
        {
            tien *= 0.88;
        }
    }
    else if (giobd > 0 && giokt <= 7)
        {
            tien= giosd * 300;
            if (giosd > 7)
            {
                tien *= 0.85;
            }

        }
    cout << "Tien su dung internet " << tien << " VND";
    
}
int main()
{
    int giobd, giokt;
    cout << "Nhap thoi gian su dung; ";
    cin >> giobd >> giokt;
    tinhtien(giobd, giokt);
}