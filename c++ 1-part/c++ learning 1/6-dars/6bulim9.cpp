
#include <iostream>
using namespace std;
int main(){
//	9-vazifa
//1. Rostlikga tekshiring a, b va c sonlari berilgan. Eng kattasi a.
//
//2. Rostlikga tekshiring a, b va c sonlari berilgan. Eng kattasi c.

int a,b,c,d,q,w;
cout<<"1 - misol uchun a= ";
cin>>a;
cout<<"1 - misol uchun b= ";
cin>>b;
cout<<"1 - misol uchun c= ";
cin>>c;
cout<<"2 - misol uchun d= ";
cin>>d; //a
cout<<"2 - misol uchun q= ";
cin>>q; //b
cout<<"2 - misol uchun w= ";
cin>>w; //c
bool J= (a>b && a>c);
bool k=(w>d && w>q);
cout<<boolalpha<<J<<" \n "<<k<<"\n";
	main();
	return 0;
}
