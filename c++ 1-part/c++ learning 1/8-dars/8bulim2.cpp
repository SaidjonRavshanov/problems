#include <iostream>
using namespace std;
int main(){
//3-vazifa
//
//1.  Foydalanuvchi tomonidan kiritilgan yilning kabisa yili yoki kabisa  yili emasligini aniqlovchi dastur tuzilsin.
//	Misol uchun: 
//	Yil = 2016
//	Natija: Kabisa yili.
//
//int x;
//cout<<"yilni kiriting = ";
//cin>>x;
//if(x%4==0 && x%100!=0){
//	cout<<" kabisa yili \n";
//} else cout<<"kabisa yili emas";

//2.  O‘quv yili davomida talaba to‘plagan reyting ballga mos ravishda uning o‘zlashtirishi haqida xabar chiqaruvchi dastur tuzilsin.
//* (0 - 55)    qoniqarsiz
//* (56 - 70)   qoniqarli
//* (71 - 85)   yaxshi
//* (86 - 100)  a'lo
int b;
cout<<"0 dan 100 gacha baholang = ";
cin>>b;
cout<<  ((b>=0 && b<=55)? "qoniqarsiz " :
    	(b>=56 && b<=70)? "qoniqarli " :
		(b>=71 && b<=85)? "yaxshi " :
		(b>=86 && b<=100)? "a'lo' " :
			"katta ball ")<<"\n";
	main();
	
	return 0;
}
