#include <iostream>
using namespace std;
int main(){
//	2-vazifa
//
//1. Rostlikga tekshiring 1 ta natural son berilgan. Berilgan son 4 xonali
//
//2. Rostlikga tekshiring 1 ta natural son berilgan. Berilgan son juft va 2 xonali
//
//3. Rostlikga tekshiring 1 ta natural son berilgan. Berilgan son toq va 3 xonali
	int a,b,c;
	cout<<" natural son kiriting a = ";
	cin>>a;
	cout<<" natural son kiriting b = ";
	cin>>b;
	cout<<" natural son kiriting c = ";
	cin>>c;
	bool s=(1000<=a && a<=9999) ;
	bool k=b%2==0 && (10<=b && b<=99) ;
	bool d=c%2==1 && (100<=c && c<=999);
	cout<<boolalpha<<s<<" 1- misolniki \n"<<k<<" 2- misolniki \n"<<d<<" 3-misolniki \n";
	main();
	
	
	
	return 0;
}
