
#include <iostream>
using namespace std;
int main(){
//	7-vazifa

//1. Rostlikga tekshiring a soni berilgan. a soni 3 ga va 8 ga karrali.
//
//2. Rostlikga tekshiring a soni berilgan. a soni 7 ga yoki 9 karrali.
//
//3. Rostlikga tekshiring a soni berilgan. a soni 3 ga karrali.

int a,b,c;
cout<<"a= ";
cin>>a;
cout<<"b= ";
cin>>b;
cout<<"c= ";
cin>>c;
bool J= (a%3==0 && a%8==0);
bool k=(b%7==0 && b%9==0);
bool l=(c%3==0);
cout<<boolalpha<<J<<" \n "<<k<<" \n "<<l;
	
	return 0;
}
