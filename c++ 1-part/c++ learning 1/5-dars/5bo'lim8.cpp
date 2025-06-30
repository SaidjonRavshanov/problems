#include <iostream>
using namespace std;
int main() {
//1. Patrikda pul bor, Juliada pul bor. Bunda Patrikning pullari
//Julianikidan ko’p. Patrik Juliaga qancha pul bersa ulardagi pul miqdori
//tenglashadi?
//
//2. Km bilan metr berilgan. Bular jami necha Dm bo'lishini aniqlang.
   
   // patrikda 5 bor juliada 3 bor patrik  berish kerak demak (5+3)/2-3
   float a,b;
   cout<<" patrik pulini kiriting a= ";
   cin>>a;
   cout<<" julia pulini kiriting b= ";
   cin>>b;
   cout<<"patrik juliaga "<<(a+b)/2-b<<" so'm bersa ikkalsini buli tenglashadi \n";
   
   double km,m;
   cout << "km ni kiriting ";
    cin >> km;
    cout << "m mi kiriting ";
    cin >> m;
    cout<<"jami = "<<km*10000+m*10<<" dm ga teng";
    return 0;
}