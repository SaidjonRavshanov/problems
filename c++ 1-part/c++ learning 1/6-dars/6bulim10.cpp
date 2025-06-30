
#include <iostream>
using namespace std;
int main(){
//10-vazifa
//
//1. Rostlikga tekshiring a, b va c sonlari berilgan. Eng kichigi b.
//
//2. Rostlikga tekshiring a va b sonlari berilgan. a soni b sonidan 2 barobar katta.

int a,b,c,d,q,w;
cout<<"1 - misol uchun a= ";
cin>>a;
cout<<"1 - misol uchun b= ";
cin>>b;
cout<<"1 - misol uchun c= ";
cin>>c;
cout<<"2 - misol uchun a= ";
cin>>d; //a
cout<<"2 - misol uchun b= ";
cin>>q; //b

bool J= (b>a && b>c);
bool k=(d==2*q);
cout<<boolalpha<<J<<" \n "<<k<<"\n";
	main();
	return 0;
}
