#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;
int giaiPT(float a, float b, float c, float &x1, float &x2)
{
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

bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDaysInMonth(int month, int year)
{
    if (month == 2)
    {
        return isLeapYear(year) ? 29 : 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        return 30;
    }
    else
    {
        return 31;
    }
}
int main()
{
    /*
        int a,b,c,x;
        cout<<"Nhap 3 so thuc : "<<endl;
        cin>>a;
        cin>>b;
        cin>>c;
        if(a>b){
        x = a;
        a =b;
        b =x;
        }
        if(a>c){
        x =a;
        a =c;
        c =x;
        }
        if(b>c){
        x =b;
        b =c;
        c =x;
        }
        cout<<"Tang dan: "<<a<<b<<c;
    */
    // btbb2
    //  float a,b,c;
    //  float x1,x2;
    //  do{
    //  	cout<<"Nhap a (a!=0): ";
    //  	cin>>a;
    //  	cout<<"Nhap b: ";
    //  	cin>>b;
    //  	cout<<"Nhap c: ";
    //  	cin>>c;
    //  }
    //  while(!a);
    //      int numNo = giaiPT(a,b,c,x1,x2);
    //  if(numNo ==0 ) {
    //  	cout<<"Phuong trinh da cho vo nghiem";
    //  }
    //  else if(numNo==1){
    //  	cout<<"Phuong trinh da cho co nghiem kep x=%.4f" << x1;
    //  }
    //  else{
    //  	cout<<"Phuong trinh da cho co hai nghiem phan biet"<<endl;
    //  	cout<< "x1=" << x1<<endl;
    //  	cout<< "x2=" << x2<<endl;
    //  }

    // //ktra tam giac
    //     double a,b,c;
    //     cout<<"Nhap 3 so duong: "<<endl;
    //     cin>>a;
    //     cin>>b;
    //     cin>>c;
    //     if( a<b+c && b<a+c && c<a+b ){
    // 		if( a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b)
    // 			cout<<"Day la tam giac vuong";
    // 		else if(a==b && b==c)
    // 			cout<<"Day la tam giac deu";
    // 		else if(a==b || a==c || b==c)
    // 			cout<<"Day la tam giac can";
    // 		else if(a*a > b*b+c*c || b*b > a*a+c*c || c*c > a*a+b*b)
    // 			cout<<"Day la tam giac tu";
    // 		else
    // 			cout<<"Day la tam giac nhon";
    // 	}
    // 	else
    // 		cout<<"Ba canh a, b, c khong phai la ba canh cua mot tam giac";

    // tinh tien taxi
    // int km_dau = 15000, km_2_5 = 13500, km_6 = 11000, tongtien;
    // double km;
    // cout << "Nhap so km da di: ";
    // cin >> km;
    // if (km <= 0)
    //     cout << "So khong hop le.";
    // else if (km == 1)
    //     cout
    //         << "Tien taxi da di la: " << km_dau;
    // else if (km <= 5)
    //     cout
    //         << "Tien taxi da di la: " << km_dau + (km - 1) * km_2_5;
    // else
    //     tongtien = km_dau + (4 * km_2_5) + (km - 5) * km_6;
    // if (km > 120)
    //     tongtien *= 0.9;
    // cout << "Tien taxi da di la: " << tongtien;

    // tinhngay
    int month, year;

    std::cout << "Nhap thang: ";
    std::cin >> month;
    std::cout << "Nhap nam: ";
    std::cin >> year;

    if (year <= 1975)
    {
        std::cout << "Nam phai lon hon 1975. Vui long nhap lai!" << std::endl;
        return 1;
    }
    if (month < 1 || month > 12)
    {
        std::cout << "Thang khong hop le. Vui long nhap lai!" << std::endl;
        return 1;
    }

    int daysInMonth = getDaysInMonth(month, year);
    std::cout << "Thang " << month << "/" << year << " co " << daysInMonth << " ngay." << std::endl;
}
