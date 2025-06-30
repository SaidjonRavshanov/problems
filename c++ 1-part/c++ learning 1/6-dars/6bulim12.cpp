
#include <iostream>
using namespace std;
int main(){
//12-vazifa
//
//1. Rostlikga tekshiring a va b sonlari berilgan. a soni b sonidan 30 ga katta
//
//2. Rostlikga tekshiring. a , b , c , d sonlari berilgan. b soni eng katta va juft son.
//
//3. Rostlikga tekshiring. a , b , c , d sonlari berilgan. c soni eng kichik va juft.

int a,b,d,q,l,o,d1,q2,l3,o4;
cout<<"1 - misol uchun a= ";
cin>>a;
cout<<"1 - misol uchun b= ";
cin>>b;
cout<<"2 - misol uchun a= ";
cin>>d; //a
cout<<"2 - misol uchun b= ";
cin>>q; //b
cout<<"2 - misol uchun c= ";
cin>>l; //c
cout<<"2 - misol uchun d= ";
cin>>o;//d
cout<<"3 - misol uchun a= ";
cin>>d1; //a
cout<<"3 - misol uchun b= ";
cin>>q2; //b
cout<<"3 - misol uchun c= ";
cin>>l3; //c
cout<<"3 - misol uchun d= ";
cin>>o4;//d

bool J= (a==b+30);
bool k=(q>d && q>l && q>o && q%2==0);
bool n=(l3<d1 && q2>l3 && l3<o4 && l3%2==0);
cout<<boolalpha<<J<<" \n "<<k<<"\n"<<n<<" \n";
	main();
	return 0;
}
