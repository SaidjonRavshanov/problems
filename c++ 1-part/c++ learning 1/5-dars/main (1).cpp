#include <iostream>
using namespace std;
int main() {
//     1. int type da son berilgan. Faqat ko'paytirish amali orqali sonni 8 chi darajasini aniqlab ekranga chiqaring.
// (Eslatma: ko'paytish amalini faqat 3 marta ishlatish mumkin)
//
// 2. int type da soat va kun berilgan. Ular jami necha soat bo'lishini aniqlab ekranga chiqaruvchi dastur tuzing.
      int a,b,c;
    cout<<"a= ";
    cin>>a;
    b=a*a;
    c=b*b;

    cout<<"8 chi darjaga oshiramiz = "<<c*c<<"\n";
int k,l;
    cout<<"kun kiriting = ";
    cin>>k;
    cout<<"soat kiriting = ";
    cin>>l;
    cout<<"jami soat = "<<k*24+l;
    return 0;
}
