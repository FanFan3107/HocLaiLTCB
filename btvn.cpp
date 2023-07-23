#include <iostream>;
#include <cmath>;
using namespace std;
int main() {
/* btvn1
   int a, b, c, d, s;
    cout<<"Nhap so xe cua ban: ";
    cin>>a;
    if(a > 1000)
        b= a % 10;
        a /=10;
        c= a % 10;
        a /=10;
        d= a %10;
        a /=10;
        a=a;
        s= (a+b+c+d) % 10;
    cout<<"So xe cua ban co so nut la:"<<s;
*/

/*  btvn2
    char n;
    cout<<"Nhap ky tu chu thuong : ";
    cin>>n;
    n =toupper(n);
    cout<<n<<endl;
*/
/*  btvn3
    int a,b,c;
    cout<<"Nhap 3 so nguyen : "<< endl;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a<b && b<c)
        cout<<"Max "<<c<<" Min "<<a<<endl;
    else if ( a>b && a<c)
        cout<<"Max "<<c<<" Min "<<b<<endl;
        else if (a>b && b>c)
            cout<<"Max "<<a<<" Min "<<c<<endl;
            else if(a>b && b<c)
                cout<<"Max "<<a<<" Min "<<b<<endl;
                else if(b>a && a>c)
                    cout<<"Max "<<b<<" Min "<<c<<endl;
                    else if(b>a && a<c)
                        cout<<"Max "<<b<<" Min "<<a<<endl;
*/
    
    double y2,y1,x;
    const double pi=3.14,e= 2.718;
    cout<<"Nhap gia tri x : ";
    cin>>x;
    y1=(double) 4*(x*x+10*x*sqrt(x)+3*x+1);
    y2=(double) (sin(pi*x*x)+sqrt(sqrt(x*x+1)))/((float)pow(e,2*x)+cos(x*(pi/4)));
    cout<<"Gia tri y1 la: "<<y1<<endl;
    cout<<"Gia tri y2 la: "<<y2<<endl;

/*  btvn5
    int h1,m1,s1,h2,m2,s2;
    cout<<"Nhap thoi gian moc 1: ";
    cin>>h1;
    cin>>m1;
    cin>>s1;
    cout<<"Nhap thoi gian moc 2: ";
    cin>>h2;
    cin>>m2;
    cin>>s2;

    int sumh= h1+h2;
    int summ= m1+m2;
    int sums= s1+s2;
    
    if (sums >60){
        sums%=60;
        summ++;
        if(summ>60){
            summ%=60;
            sumh++;
            if(sumh>=24)
            {
                if(sumh==24)
                sumh=0;
                else
                sumh%=24;
                sumh--;
            }
        }
    }
    cout<<"Tong gio cua 2 moc la: "<<sumh<<"h"<<summ<<"m"<<sums<<"s"<<endl;
*/
}