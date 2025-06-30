#include <iostream>
using namespace std;
int main(){
//10-vazifa
//
//1.  Aqlli tesla mashinasida agar uning quvvat miqdori 20% 
//dan kam bo‘lsa “Mashinani qayta quvvatlang” degan yozuv, 
//21% dan 40% gacha bo‘lsa “Mashinada kam zaryad miqdori mavjud”,
// 41% dan 100% gacha bo‘lsa “Mashinada quvvat miqdori yetarlicha” 
// deb yozuv chiqaruvchi dastur tuzilsin. 
//

//int w;
//cout<<"tesla quvvqatini kiriting ";
//
//cin>>w;
//cout<<((w<20)?"mashinani qayta quvvatlang ":
//		(w>21 && w<40)?"mashinada kam zaryad miqdori mavjud ":
//		(w>41 && w<100)?"mashinada quvvat miqdori yetarlicha ":"no aniq kiritish")<<"\n";
//2.  1-999 oraliqdagi sonlar berilgan bo‘lsin. Foydalanuvchi tomonidan
// kiritilgan sonni so‘zlar yordamida ekranga chiqaruvchi dastur tuzilsin.
//Misol uchun: 
//N = 12  
//Natija: o‘n ikki.
int n;
cout<<"1-999 oraliqdagi sonlarni kiriting ";
cin>>n;
int birlar=n%10;
int onlar=n/10%10;
int yuzlar=n/100%10;
if(n>=1 && n<=9){

         if(birlar==1) cout<<" bir ";
	else if(birlar==2) cout<<" ikki ";
	else if(birlar==3) cout<<" uch ";
	else if(birlar==4) cout<<" to'rt ";
	else if(birlar==5) cout<<" besh ";
	else if(birlar==6) cout<<" olti ";
	else if(birlar==7) cout<<" yetti ";
	else if(birlar==8) cout<<" sakkiz ";
	else if(birlar==9) cout<<" to'qqiz "; 
	
} else  if(n>=10 && n<=99){
	if(onlar==1) cout<<" o'n ";
	else if(onlar==2) cout<<" yigirma ";
	else if(onlar==3) cout<<" o'ttiz' ";
	else if(onlar==4) cout<<" qirq ";
	else if(onlar==5) cout<<" ellik ";
	else if(onlar==6) cout<<" oltmush ";
	else if(onlar==7) cout<<" yetmush ";
	else if(onlar==8) cout<<" sakson ";
	else if(onlar==9) cout<<" to'qson "; 
	
    if(birlar==1) cout<<" bir ";
	else if(birlar==2) cout<<" ikki ";
	else if(birlar==3) cout<<" uch ";
	else if(birlar==4) cout<<" to'rt ";
	else if(birlar==5) cout<<" besh ";
	else if(birlar==6) cout<<" olti ";
	else if(birlar==7) cout<<" yetti ";
	else if(birlar==8) cout<<" sakkiz ";
	else if(birlar==9) cout<<" to'qqiz "; 
}
 else  if(n>=100 && n<=999){
 	if(yuzlar==1) cout<<"bir yuz ";
 	else if(yuzlar==2) cout<<"ikki yuz ";
 	else if(yuzlar==3) cout<<"uch yuz ";
 	else if(yuzlar==4) cout<<"to'rt yuz ";
 	else if(yuzlar==5) cout<<"besh yuz ";
 	else if(yuzlar==6) cout<<"olti yuz ";
 	else if(yuzlar==7) cout<<"yetti yuz ";
 	else if(yuzlar==8) cout<<"sakkiz yuz ";
 	else if(yuzlar==9) cout<<"to'qqiz yuz ";
 	
 	if(onlar==1) cout<<" o'n ";
	else if(onlar==2) cout<<" yigirma ";
	else if(onlar==3) cout<<" o'ttiz' ";
	else if(onlar==4) cout<<" qirq ";
	else if(onlar==5) cout<<" ellik ";
	else if(onlar==6) cout<<" oltmush ";
	else if(onlar==7) cout<<" yetmush ";
	else if(onlar==8) cout<<" sakson ";
	else if(onlar==9) cout<<" to'qson "; 
	
	if(birlar==1) cout<<" bir ";
	else if(birlar==2) cout<<" ikki ";
	else if(birlar==3) cout<<" uch ";
	else if(birlar==4) cout<<" to'rt ";
	else if(birlar==5) cout<<" besh ";
	else if(birlar==6) cout<<" olti ";
	else if(birlar==7) cout<<" yetti ";
	else if(birlar==8) cout<<" sakkiz ";
	else if(birlar==9) cout<<" to'qqiz "; 
 	
 } else cout<<"1-999 oraliqda son kiriting !!! \n";
	main();
	
	return 0;
}
