#include <iostream>
using namespace std;
int main(){
//3-vazifa
//
//1. Rostlikga tekshiring 1 ta natural son berilgan. Berilgan son juft va 4 xonali
//
//2. Rostlikga tekshiring 2 ta natural son berilgan. 2 lasi ham toq
//
//3. Rostlikga tekshiring 2 ta natural son berilgan. 2 lasi ham juft.
	int a,b,c,l,o;
	cout<<" natural son kiriting a = ";
	cin>>a;
	cout<<" natural son kiriting juft busin b = ";
	cin>>b;
    cout<<" natural son kiriting juft busin l = ";
	cin>>l;
	cout<<" natural son kiriting toq busin c = ";
	cin>>c;
	cout<<" natural son kiriting toq busin o = ";
	cin>>o;
	bool s=a%2==0 && (1000<=a && a<=9999) ;
	bool k=(b%2==0 && l%2==0) ;
	bool d=(c%2==1 && c%2==1) ;
	cout<<boolalpha<<s<<" 1- misolniki \n"<<k<<" 2- misolniki \n"<<d<<" 3-misolniki \n";
	main();
	
	
	
	return 0;
}
