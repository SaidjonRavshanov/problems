#include <iostream>
using namespace std;
int main(){
//5-vazifa
//
//1. Rostlikga tekshiring 1 ta 2 xonali son berilgan. Sonni raqamlari yig‘indis 10 dan katta.
//
//2. Rostlikga tekshiring 1 ta 2 xonali son berilgan. Sonni raqamlari ko‘paytmasi 20 dan katta
//
//3. Rostlikga tekshiring 1 ta 2 xonali son berilgan. Sonni raqamlarini 2 lasi ham toq.
	int a,c,o;
	
	
	cout<<" natural 2 xonali son kiriting a = ";
	cin>>a;
	cout<<" natural 2 xonali son kiriting c = ";
	cin>>c;
	cout<<" natural 2 xonali son kiriting o = ";
	cin>>o;
	bool k=(a>=10 && a<=99 && (a/10+a%10)>=10);
	bool f=(c>=10 && c<=99 && (c/10)*(c%10)>=20);
	bool p=(o>=10 && o<=99 && o/10%2==1 && o%2==1);
	cout<<boolalpha<<" 1- misol "<<k<<" \n "<<" 2- misol "<<f<<" \n "<<" 3- misol "<<p<<"\n";
	main();
	
	
	
	return 0;
}
