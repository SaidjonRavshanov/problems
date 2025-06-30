//2-vazifa
//
//1. 1 ta son berilgan. Shu sonni naturalikga tekshirib bering.
//
//2. 1 ta son berilgan. Shu sonni kvadrat ildizni aniqlang.
//
//3. 1 ta son berilgan. Shu sonni kub ildizni aniqlang.
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double a;
	cout<<"a= ";
	cin>>a;
     cout<<((ceil(a)==a && a>0)? " natural son \n" : " natural son emas \n");
	double s;
	cout<<"s= ";
	cin>>s;
	cout<<"kv ildiz "<<sqrt(s)<<"\n";
	cout<<" kub ildiz "<<cbrt(s)<<"\n";
	main();
	return 0;
	
}
