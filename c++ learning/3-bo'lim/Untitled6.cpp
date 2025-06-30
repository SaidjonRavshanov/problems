#include <iostream>
#include <math.h>
using namespace std;
//6-vazifa
//
//1. Barcha 2 xonali sonlar ichida raqamlari toq bo値gan 
// barcha sonlarni ekranga chiqaruvchi funksiya tuzib bering. misol uchun(15, 77, 31, 95)
//
//2. Barcha 3 xonali sonlar ichida raqamlari toq bo値gan 
// barcha sonlarni ekranga chiqaruvchi funksiya tuzib bering. misol uchun(157, 757, 331, 915)
void ikkitoq(int son=10){
	for(int i=son ; i<=99 ;i++){
		if(i%10%2==1 && (i/10%10)%2==1){
			cout<<"2 xonali sonlar ichida raqamlari toq bo値ganlar : "<<i<<endl;
		}
	}
}
void uchtoq(int son1=100){
	for(int i=son1 ; i<=999 ;i++){
		if(i%10%2==1 && (i/10%10)%2==1 && (i/100%10)%2==1){
			cout<<"3 xonali sonlar ichida raqamlari toq bo値ganlar : "<<i<<endl;
		}
	}
}
int main(){
	ikkitoq();
	uchtoq();
}

