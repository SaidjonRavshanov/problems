#include <iostream>
using namespace std;
int main(){
//2-vazifa
//
//1.  1 ta son berilgan. Agar son 100 dan katta bo'lsa uni qiymatini 20 ga oshirib, aks holda o'zini ekranga chiqaring.
//
//2.  1 ta son berilga. Agar son juft bo'lsa uni qiymatini 10 ga oshirib, aks holda o'zini ekranga chiqaring.
//
//3.  1 ta son berilga. Agar son toq bo'lsa uni qiymatini 10 ga kamaytirib, aks holda o'zini ekranga chiqaring.
	
	//1-misol
	int a;
	cout<<"a= ";
	cin>>a;
	if(a>100){cout<<a+20<<" \n";
	} else cout<<a<<" \n";
	//------------------------------------------------------------
	//3-misol
	int b;
	cout<<"b= ";
	cin>>b;
	if(b%2==0){
		cout<<b+10<<" \n";
	} else cout<<b<<" \n";
	//-----------------------------------------------------------
	//3-misol
	int c;
	cout<<" c= ";
	cin>>c;
	if(c%2!=0){
		cout<<c-10<<" \n";
	} else cout<<c<<" \n";
	//--------------------
	main();
	return 0;
	
}
