#include <iostream>
using namespace std;
int main(){
//7-vazifa
//
//1.  Aqlli tesla mashinasi “qizil” chiroqni ko‘rsa “harakatlanishdan to‘xtang”
// degan yozuv chiqadi, yoki “sariq” chiroq yonsa “harakatlanishga tayyorlaning”,
//  aks holda “yashil” chiroq yonsa “harakatlanishni davom ettiring” degan ogohlantiruvchi dastur tuzilsin.
//Masalan: qizil       Natija: harakatlanishdan to‘xtang
//
//string rang;
//cout<<"svitafor rangini kiriting 'sariq qizil yashil' : ";
//cin>>rang;
//cout<<((rang=="qizil" || rang=="Qizil" || rang=="QIZIL")?"harakatlanishdan to'xtang" :
//		(rang=="yashil" ||rang=="Yashil" || rang=="YASHIL")?"harakatlanishni davom ettiring" :
//		(rang=="sariq" || rang=="Sariq" || rang=="SARIQ")?"harakatlanishga tayyorlaning" : "svitaforda bunday rang yo'q")<<"\n";
//2.  Uchta son berilgan. Shu sonlarni avval kichigini keyin kattasini ekranga chiqaruvchi dastur tuzilsin.
//	Misol uchun: 
//	a = 12, b = 27, c = 19  
//	Natija: min = 12, max = 27
int a,b,c;
cin>>a>>b>>c;
if(a>b && a>c){
	if(b>c){
		cout<<"max= "<<a<<"min= "<<c<<"\n";
	}else {
		cout<<"max= "<<a<<"min= "<<b<<"\n";
	}
} else if(b>a && b>c){
	if(a>c){
		cout<<"max= "<<b<<"min= "<<c<<"\n";
	}else {
		cout<<"max= "<<b<<"min= "<<a<<"\n";
	}
} else if(c>a && c>a){
	if(b>a){
		cout<<"max= "<<c<<"min= "<<a<<"\n";
	}else {
		cout<<"max= "<<c<<"min= "<<b<<"\n";
	}
}


	main();
	
	return 0;
}
