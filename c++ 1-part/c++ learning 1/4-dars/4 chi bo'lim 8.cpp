#include <iostream>
using namespace std;
int main(){
//Uch xonali son berilgan. Uni chapdan birinchi raqamni o’chirib,
// o’n tarafiga yozishdan hosil bo’lgan sonni aniqlovchi programma tuzilsin. (Masalan: input - 478, output - 784).

	
	int c;

	cout<<"uch xonali son kiriting abc= ";
	cin>>c;
	
	cout<<c/100*10+ c/10%10+ c%10*100<<" = cab";
	return 0;
}