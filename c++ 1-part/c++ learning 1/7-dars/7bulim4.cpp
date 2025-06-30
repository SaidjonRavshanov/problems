#include <iostream>
using namespace std;
int main(){
//4-vazifa
//
//1.  2 ta son berilgan. Katta soni ekranga chiqarib beruvchi dastur tuzing.
//
//2.  2 ta son berilgan. Kichik soni ekranga chiqarib beruvchi dastur tuzing.
//
//3.  2 ta son berilgan. Agar 2 lasi ham 2 xonali bo'lsa yig'indisini, aks 
//holda ko'paytmasini aniqlab ekranga chiqaruvchi dastur tuzing.
	//1-misol
		int b,d;
	cout<<"b= ";
	cin>>b;
	cout<<"d= ";
	cin>>d;
	if(b>d){
		cout<<b<<" \n";
	} else cout<<d<<" \n";
	
	//------------------------------------------------------------
	//3-misol
	int c,k;
	cout<<" c= ";
	cin>>c;
	cout<<"k= ";
	cin>>k;
	if(c>k){
		cout<<(k)<<" \n";
	} else cout<<c<<" \n";

	//-----------------------------------------------------------
	//3-misol
		int a,l;
	cout<<"a= ";
	cin>>a;
	cout<<"l= ";
	cin>>l;
	if(a>=10 && a<=99 && l>=10 && l<=99 ){cout<<a+l<<" \n";
	} else cout<<a*l<<" \n";
	//--------------------
	main();
	return 0;
	
}
