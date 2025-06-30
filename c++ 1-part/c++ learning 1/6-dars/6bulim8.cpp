
#include <iostream>
using namespace std;
int main(){
//	8-vazifa
//1. Rostlikga tekshiring a soni berilgan. a soni 5 ga bo'linmaydi.
//
//2. Rostlikga tekshiring a sonni berilgan. a soni 4 ga bo'linib 3 ga bo'linmaydi 
//
//3. Rostlikga tekshiring a va b sonlari berilgan. a soni b sonidan katta.
//
//4. Rostlikga tekshiring a va b sonlari berilgan. a soni b soniga teng.

int a,b,c,d,q,w;
cout<<"a= ";
cin>>a;
cout<<"b= ";
cin>>b;
cout<<" taqqoslash uchun c= ";
cin>>c;
cout<<"taqqoslash uchun d= ";
cin>>d;
cout<<"teng bo'lishi kerak 'q= ";
cin>>q;
cout<<"teng bo'lishi kerak 'w= ";
cin>>w;
bool J= (a%5!=0);
bool k=(b%4==0 && b%3!=0);
bool l=(c>d);
bool r=(q==w);
cout<<boolalpha<<J<<" \n "<<k<<" \n "<<l<<" \n "<<r;
	
	return 0;
}
