#include <iostream>
using namespace std;
int main(){
//	1-vazifa
//
//1. Rostlikga tekshiring 1 ta natural son berilgan. Berilgan son juft.
//
//2. Rostlikga tekshiring 1 ta natural son berilgan. Berilgan son toq
//
//3. Rostlikga tekshiring 1 ta natural son berilgan. Berilgan son 2 xonali
	int a,b,c;
	cout<<" natural son kiriting a = ";
	cin>>a;
	cout<<" natural son kiriting b = ";
	cin>>b;
	cout<<" natural son kiriting c = ";
	cin>>c;
	bool s=a%2==0 ;
	bool k=b%2==1 ;
	bool d=(10<=c && c<=99);
	cout<<boolalpha<<s<<" 1- misolniki \n"<<k<<" 2- misolniki \n"<<d<<" 3-misolniki \n";
	main();
	
	
	
	return 0;
}
