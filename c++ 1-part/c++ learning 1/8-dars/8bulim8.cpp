#include <iostream>
using namespace std;
int main(){
//9-vazifa
//
//1.  Azizbek yangi sotib olgan kompyuteriga password “Aziz20” qo‘ydi. Bir kuni ukasi
// Azizbekning ruxsatisiz kompyuteriga kirmoqchi bo‘ldi va parolni terdi. Shu paytda agar
//  password to‘g‘ri terilsa “Assalomu alaykum Azizbek, Xush kelibsiz” aks xolda esa
//   “Siz xato passwordni kiritidingiz degan” yozuvni chiqaruvchi dastur tuzilsin.
//
//int p;
//cout<<"parolni kiriting :";
//string password;
//cin>>password;
//if(password=="Aziz20"){
//	cout<<"Assalomu aleykum Azizbek, Xush kelibsiz \n";
//} else cout<<"Siz xato passwordni kiritidingiz!!! \n";



//2.  Sizda a, b va c raqamlari bilan lotereya chiptasi bor. Agar barcha raqamlar
// bir-biridan farq qilsa, “Natija 0”. Agar barcha raqamlar bir xil bo‘lsa, “Natija 20”.
//  Agar ikkita raqam bir xil bo‘lsa, “Natija 10” kabi yozuvlarni ekranga chiqaruvchi dastur tuzilsin.
int a,b,c;
cout<<"lotariya raqamlarini kiriting : ";
cin>>a>>b>>c;
if(a==b && b==c ){
	cout<<"natija 20 \n";
} else if( a==b || b==c || c==a ){
	cout<<"natija 10 \n";
} else cout<<"natija 0 \n";
	main();
	
	return 0;
}
