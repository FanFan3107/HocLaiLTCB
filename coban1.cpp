#include <iostream>
using namespace std;
int main() {
    int h=15,w=30;
    for( int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if (i ==  h/2 && j== w / 2-2)
            {
                cout<<"THAO CHUONG BANG NGON NGU C";
                j+=5;
            }
            else if ( i ==0 || i == h-1 ||j ==0 ||j==w-1)
            {
                cout<<"*";
            }
            else
                cout<<" ";
        }
        cout<<"\n";
    }
}