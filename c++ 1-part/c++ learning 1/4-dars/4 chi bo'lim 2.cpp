#include <iostream>
using namespace std;
//1.  int type da 1 ta 5 xonali son berilgan. Shu sonni minglar xonasidagi raqamni aniqlab ekranga chiqaring.
//
//2.  int type da 1 ta 4 xonali son berilgan. Shu sonni yuzlar xonasidagi raqamni aniqlab ekranga chiqaring.
//
//3.  int type da 1 ta 3 xonali son berilgan. Shu sonni raqamlar yig'indisini aniqlab ekranga chiqaring.
int main(){
	int a,b,c;
	
	 cout<<" 5 xonali son kiriting a= ";
	 cin>>a;
	 cout<<" 4 xonali son kiriting b= ";
	 cin>>b;
	 cout<<" 3 xonala son kiriting c= ";
	 cin>>c;
	 
	 cout<<" 5 xonali sonning 1000 lar xonasidagi raqam "<<a/1000%10<<" ga teng \n";
	 cout<<" 4 xonali sonning 100 lar xonasidagi raqam "<<b/100%10<<" ga teng \n";
	 cout<<" 3 xonali sonning raqamlar yig'indisi' "<<c/100+c/10%10+c%10<<" ga teng \n";
	return 0;
}