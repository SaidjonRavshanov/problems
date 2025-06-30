#include <iostream>
using namespace std;
int main() {
//1. int type da dollar va yevro berilgan. Ular jami necha so'm bo'lishini aniqlab ekranga chiqaruvchi dastur tuzing.
//(Eslatman : 1 dollar = 12600 so'm, 1 yevro = 14500 so'm deb hisoblansin)
//
//2. int type da son berilgan. Faqat ko'paytirish amali orqali sonni 10 chi darajasini aniqlab ekranga chiqaring. 
//(Eslatma: ko'paytish amalini faqat 4 marta ishlatish mumkin)
    int d,y;
    cout<<"dollor kiriting = ";
    cin>>d;
   cout<<"yevro kiriting = ";
   cin>>y;
    cout<<"jami = "<<d*12600+y*14500<<" so'mni tashkil qiladi '\n";
    
int son,a,b;
cout<<"son kiriting = ";
cin>>son;
a=son*son; //2 daraja
b=a*a; //4 daraja
 //8 daraja
cout<<b*b*a<<"\n";
main();
    return 0;
}