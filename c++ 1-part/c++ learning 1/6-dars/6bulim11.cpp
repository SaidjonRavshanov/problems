
#include <iostream>
using namespace std;
int main(){
//11-vazifa
//
//1. Rostlikga tekshiring a va b sonlari berilgan. b soni a sonidan 5 barobar katta.
//
//2. Rostlikga tekshiring a va b sonlari berilgan. Ixtiyoriy bittasi 2 chisidan 4 barobar katta.

int a,b,c,d,q,w;
cout<<"1 - misol uchun a= ";
cin>>a;
cout<<"1 - misol uchun b= ";
cin>>b;

cout<<"2 - misol uchun a= ";
cin>>d; //a
cout<<"2 - misol uchun b= ";
cin>>q; //b

bool J= (b==a*5);
bool k=(d==4*q || q==4*d);
cout<<boolalpha<<J<<" \n "<<k<<"\n";
	main();
	return 0;
}
