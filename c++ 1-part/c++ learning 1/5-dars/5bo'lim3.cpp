#include <iostream>
using namespace std;
int main() {
    // 1. int type da hafta va soat berilgan. Ular jami necha kun bo'lishini aniqlab ekranga chiqaruvchi dastur tuzing.
    //
    // 2. int type da minut va soat berilgan. Ular jami necha sekund bo'lishini aniqlab ekranga chiqaruvchi dastur tuzing.
    int k,l;
    cout<<"hafta kiriting = ";
    cin>>k;
    cout<<"soat kiriting = ";
    cin>>l;
    cout<<"jami kun = "<<k*7+l/24;
    int f,d;
    cout<<"minut kiriting = ";
    cin>>f;
    cout<<"soat kiriting = ";
    cin>>d;
    cout<<"jami secund = "<<f*60+d*60*60;
    return 0;
}