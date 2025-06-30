#include <iostream>
#include <math.h>
using namespace std;
//7-vazifa
//
//1. Barcha 3 xonali sonlar ichida raqamlar yig’indisi 
//20 dan katta bo’lgan  barcha sonlarni ekranga chiqaruvchi funksiya tuzib bering.
//
//2. Barcha 3 xonali sonlar ichida raqamlar ko'paytmasi 
//40 dan katta bo’lgan  barcha sonlarni ekranga chiqaruvchi funksiya tuzib bering.
void uchsum(int son=100){
	for(int i=son ; i<=999 ;i++){
		if(i%10+(i/10%10)+(i/100%10)>20){
			cout<<"raqamlari yig'indisi 20 dan katta : "<<i<<endl;
		}
	}
}
void uchaugment(long long int son1=100){
	for(int i=son1 ; i<=999 ;i++){
		if(i%10*(i/10%10)*(i/100%10)>40){
			cout<<"raqamlari ko'paytmasi 40 dan katta : "<<i<<endl;
		}
	}
}
int main(){
	uchsum();
	uchaugment();
}
