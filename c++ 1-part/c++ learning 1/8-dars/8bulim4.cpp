#include <iostream>
using namespace std;
int main(){
//5-vazifa
//
//1. Jumlani rostlikka tekshiring: Berilgan uchta butun sonlarning
// hech bo‘lmaganda ikkitasi bir biriga teng deb yozuv chiqaruvchi dastur tuzilsin.
//

//int a,b,c;
//cin>>a>>b>>c;
//cout<<((a==b || b==c || c==a)? "hech bo'lmaganda 2 tasi teng ": " boshqa natija")<<"\n";
//2. Elektromobilning 100 km masofani bosib o‘tish uchun akkumlatoridagi to
//‘liq quvvatning 40% sarflaydi. Ayni paytda uning quvvati (energy) K% qolgan.
// Haydovchi D (distance) km masofaga borishi uchun quvvat yetarli yoki yetarli
//  emasligini aniqlang. Agar bor quvvat yetarli bo‘lmasa, yana necha % quvvat 
//  kerakligi (required power) ni aniqlang. Bunda K va D foydalanuvchi tomonidan kiritiladi.
//int k,d;
//cout<<"quvvatni kiriting =";
//cin>>k;
//cout<<"masofani kiriting= ";
//cin>>d;
//double yk=40.0*d/100;
//if(k>=yk){
//	cout<<"borish uchun yetarli \n";
//}else {
//	cout<<"borish uchun  yetarli emas!!! \n";
//	cout<<" yana "<<double(yk-k)<<"% quvvat kerak \n";
//}
   double K; // Qolgan quvvat foizi
    double D; // Borish kerak bo'lgan masofa (km)

    // Foydalanuvchidan K va D ni kiritishni so'rash
    cout << "Akkumulyator quvvatining qolgan foizini kiriting (K): ";
    cin >> K;
    cout << "Borish kerak bo'lgan masofani kiriting (D km): ";
    cin >> D;

    // 100 km ga ketadigan quvvat foizi
    double requiredPowerFor100km = 40.0;

    // Borish kerak bo'lgan masofa uchun kerakli quvvat
    double requiredPower = (D / 100.0) * requiredPowerFor100km;

    // Qolgan quvvat yetarlimi yoki yo'qligini tekshirish
    if (K >= requiredPower) {
        cout << "Borish uchun quvvat yetarli." << endl;
    } else {
        double additionalPowerNeeded = requiredPower - K;
        cout << "Borish uchun quvvat yetarli emas." << endl;
        cout << "Yana " << additionalPowerNeeded << "% quvvat kerak." << endl;
    }

	main();
	
	return 0;
}
