#include <iostream>
using namespace std;
int main(){
///3-vazifa
//
//1.  1 ta son berilga. Agar son juft bo'lsa uni qiymatini 10 marta oshirib, aks holda o'zini ekranga chiqaring.
//
//2.  1 ta son berilga. Agar son toq bo'lsa uni qiymatini 10 martaga kamaytirib, aks holda o'zini ekranga chiqaring.
//
//3.  1 ta son berilga. Agar son 2 xoanli bo'lsa uni qiymatini 100 ga oshirib, aks holda o'zini ekranga chiqaring.

	//1-misol
		int b;
	cout<<"b= ";
	cin>>b;
	if(b%2==0){
		cout<<b*10<<" \n";
	} else cout<<b<<" \n";
	
	//------------------------------------------------------------
	//3-misol
	int c;
	cout<<" c= ";
	cin>>c;
	if(c%2==1){
		cout<<float(c)/10<<" \n";
	} else cout<<c<<" \n";

	//-----------------------------------------------------------
	//3-misol
		int a;
	cout<<"a= ";
	cin>>a;
	if(a>=10 && a<=99){cout<<a+100<<" \n";
	} else cout<<a<<" \n";
	//--------------------
	main();
	return 0;
	
}
