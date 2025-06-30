#include <iostream>
using namespace std;
int main(){

//Uch xonali son berilgan. Uni o’ngdan birinchi raqamni o’chirib, 
//chap tarafiga yozishdan hosil bo’lgan sonni aniqlovchi programma tuzilsin. (Masalan: input - 473, output - 347).
	
	int c;

	cout<<"uch xonali son kiriting abc= ";
	cin>>c;
	
	cout<<c/100*10+ c/10%10+ c%10*100<<" = cab";
	return 0;
}