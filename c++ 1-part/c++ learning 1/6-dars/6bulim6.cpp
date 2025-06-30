#include <iostream>
using namespace std;
int main(){
//6-vazifa
//
//1. Rostlikga tekshiring 1 ta 2 xonali son berilgan. Son raqamlarining 2 lasi ham 5 dan katta.
//
//2. Rostlikga tekshiring a soni berilgan. a soni 3 ga karrali.
//
//3. Rostlikga tekshiring a soni berilgan. a soni 7 ga karrali.

	int a,c,o;
	
	cout<<" natural 2 xonali son kiriting a = ";
	cin>>a;
	cout<<" son kiriting c = ";
	cin>>c;
	cout<<" son kiriting o = ";
	cin>>o;
	bool k=(a>=10 && a<=99) && (a/10>5 && a%10>5);
	bool f=c%3==0;
	bool p=o%7==0;
	cout<<boolalpha<<" 1- misol "<<k<<" \n "<<" 2- misol "<<f<<" \n "<<" 3- misol "<<p<<"\n";
	main();
	
	
	
	return 0;
}
