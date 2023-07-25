#include <iostream>
#include <math.h>
using namespace std;
int ktra(int ngay, int thang, int nam)
{
    int ngaymax;
    int ngay1, thang1, nam1;
    if (nam < 0 || thang < 0 || thang > 12 || ngay < 0 || ngay > 31)
    {
        cout << "Ngay khong hop le !";
    }
    else
    {
        switch (thang)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            ngaymax = 31;
            break;
        case 2:
            if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
                ngaymax = 29;
            else
                ngaymax = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            ngaymax = 30;
            break;
        }
        if (ngay <= ngaymax)
        {
            cout << "Ngay hop le !\n";
        }
        else
        {
            cout << "Ngay khong hop le !\n";
        }
        cout << "Thang co " << ngaymax << endl;
    }

    ngay = (ngay % ngaymax) + 1;
    if (ngay == 1)
    {
        thang = (thang % 12) + 1;
    }

    cout << "Ngay mai: " << ngay << "/" << thang << "/" << nam + (thang == 1 && ngay == 1) << endl;

  
  if(nam>0&& thang>0&& thang<13&& ngay>0&& d<=(ngaymax)
  {
    ngay1=ngay+1;
    
    if(thang!=12&& ngay== ngaymax)
    {
      ngay1=1;
      thang1=thang+1;
    }
    
    else if(thang==12&&ngay==ngaymax)
    {
      ngay1=1;
      nam1=nam+1;
      thang1=1;
    }
    else if(thang==2)
    {
      
      if(nhuan(y))
      {
        
        if(d==29)
        {
          nd=1;
          nm=m+1;
        }
      }
      
      else
      {
         
        if(d==28)
        {
          nd=1;nm=m+1;
        }
      }
    }     
  }
    printf("\nNgày tiếp theo : %d:%d:%d",nd,nm,ny);
}
int main()
{
    int ngay, thang, nam;
    cout << "Nhap ngay thang nam hom nay: \n";
    cin >> ngay >> thang >> nam;
    ktra(ngay, thang, nam);
}