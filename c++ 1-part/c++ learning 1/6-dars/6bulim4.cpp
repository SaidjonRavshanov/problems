#include <iostream>
using namespace std;
int main(){
//4-vazifa
//
//1. Rostlikga tekshiring 2 ta natural son berilgan. 2 lasi ham toq va 2 xonali.
//
//2. Rostlikga tekshiring 1 ta 2 xonali natural son berilgan. Berilgan son raqamlari teng.
	int a,c,o;
	
	
	cout<<" natural 2 xonali son kiriting toq busin  c = ";
	cin>>c;
	cout<<" natural 2 xonali son kiriting toq busin o = ";
	cin>>o;
	cout<<" natural 2 xonali son kiriting a = ";
	cin>>a;
	
	bool d=(c%2==1 && o%2==1 && o>=10 && o<=99 && c>=10 && c<=99) ;
	bool k=(a/10==a%10);
	cout<<boolalpha<<d<<" 1- misolniki \n"<<k<<" 2- misolniki \n";
	main();
	
	
	
	return 0;
}
