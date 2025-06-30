#include <iostream>
using namespace std;
//2-vazifa
//
//1. 2 ta sonni parametr sifatida qabul qilganda ularning 
//yig’indisini, 3 ta sonni parametr sifatida qabul qilganda
// esa ularning ko‘paytmasini hisoblab, natija sifatida qaytaruvchi calculate() overloading funksiyasini yozing.
//
//2. Agar funksiyaga int berilsa nech xonaligini, string 
//berilsa nechta raqami borligini aniqlab beruvchi getAmountDigit() nomli overloading function yarating.
float calculate(float a1,float a2){
	return a1+a2;
}
float calculate(float a1,float a2,float a3){
	return a1*a2*a3;
}
int getAmountDigit(int son){
	int sanoq=0;
	while(true){
		sanoq++;
		son/=10;
		if(son==0) break;
	}
	return sanoq;
}
int getAmountDigit(string son){
	int sanoq1=0;
	for(int i=0; i<son.length();i++){
		if(isdigit(son[i])){
			sanoq1++;
		}
	}
	return sanoq1++;
}
int main(){
	cout<<"calculate \n";
	cout<<calculate(1.2,1.4,8.2)<<endl;
	cout<<calculate(1.2,1.7)<<endl;
	cout<<"getAmountDigit \n";
	cout<<getAmountDigit(12312)<<endl;
	cout<<getAmountDigit("sa23l3")<<endl;
	
}

