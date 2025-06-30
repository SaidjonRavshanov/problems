#include <iostream>
using namespace std;
//1.  int type da 1 ta 3 xonali son berilgan. Shu sonni raqamlar ko'paytmasini aniqlab ekranga chiqaring.
//
//2.  int type da 1 ta 2 xonali son berilgan. Shu sonni raqamlar ko'paytmasini aniqlab ekranga chiqaring.
//
//3.  int type da 1 ta 5 xonali son berilgan. Shu sonni raqamlar yig'indisini aniqlab ekranga chiqaring.
//
//4. int type da 1 ta 3 xonali son berilgan. Shu sonni teskari qilib ekranga chiqaring.
int main(){
	int a,b,c,d;
	
	 cout<<" 3 xonali son kiriting a= ";
	 cin>>a;
	 cout<<" 2 xonali son kiriting b= ";
	 cin>>b;
	 cout<<" 5 xonala son kiriting c= ";
	 cin>>c;
	 cout<<" 3 xonala son kiriting d= ";
	 cin>>d;
	 
	 cout<<" 3 xonali sonning raqamlar ko'paytmasi "<<(a/100)*(a%10)*(a/10%10)<<" ga teng \n";
	 cout<<" 2 xonali sonning raqamlar ko'paytmasi "<<(b%10)*(b/10)<<" ga teng \n";
	 cout<<" 5 xonali sonning raqamlar yig'indisi "<<c/10000+c/1000%10+c/100%10+c/10%10+c%10<<" ga teng \n";
	 cout<<" 3 xonali sonning raqamlar teskarisi "<<d/100+d%10*100+d/10%10*10<<" ga teng \n";
	return 0;                                          
}