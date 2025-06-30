#include <iostream>
using namespace std;
int main(){
//	1-vazifa
//
//1. 1 ta son berilgan. Shu son haqida ma'lumot bering. Agar musbat bo'lsa
// "musbat" ni, aks holda "musbat emas" ni ekranga chiqaruvchi dastur tuzing. 
//
//2. 1 ta son berilgan. Shu son haqida ma'lumot bering. Agar 2 xonali bo'lsa 
//"C++" ni, aks holda "C#" ekranga chiqaruvchi dastur tuzing.
//
//3. 1 ta son berilgan. Shu son haqida ma'lumot bering. Agar juft bo'lsa 
//"juft" ni, aks holda "juft emas" ni ekranga chiqaruvchi dastur tuzing
	
	//1-misol
	int a;
	cout<<"a= ";
	cin>>a;
	if(a>0){cout<<"musbat son \n";
	} else cout<<"manfiy son \n";
	//------------------------------------------------------------
	//3-misol
	int b;
	cout<<"2 xonali son kiriting b= ";
	cin>>b;
	if(b>=10 && b<=99){
		cout<<"c++ \n";
	} else cout<<"c# \n";
	//-----------------------------------------------------------
	//4-misol
	int c;
	cout<<"juft yoki juft emas son kiriting c= ";
	cin>>c;
	if(c%2==0){
		cout<<"juft \n";
	} else cout<<"juft emas \n";
	//--------------------
	main();
	return 0;
	
}
