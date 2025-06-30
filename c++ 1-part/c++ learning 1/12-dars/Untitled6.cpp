#include <iostream>
using namespace std;
int main(){
//6-vazifa
//
//1. 1 ta butun son berilgan. Berilgan son raqamlari orasida 5 raqami bor 
//yo’qligini aniqlovchi programma tuzilsin.
//
//2. 1 ta butun son berilgan. Berilgan son raqamlari orasida juft raqamlar bor yo’qligini aniqlovchi programma tuzilsin.
	int son;//4567
	cin>>son;
	while(true){
    int ajr=son%10;
	if(ajr%5==0) {
    cout<<" 5 raqami bor ";
	} else cout<<" 5 raqami yoq";
	son/=10;
	break;
}
cout<<"\n-------------------------------------------------------------------------\n";
int son1;//4567
	cin>>son1;
	while(true){
	
	if(son1%2==0) cout<<" juft raqami bor ";
	son1/=10;
	break;
}
main();
return 0;
}
