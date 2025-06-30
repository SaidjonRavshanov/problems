#include <iostream>
using namespace std;
//3-vazifa
//
//5. Funksiayaga 3 ta son berilsa ham, 4 ta son berilsa 
//ham, 5 ta son berilsa ham kattasini aniqlab beruvchi findMax() funksiyasini yaratib bering.
//
//6. Parametr sifatida 1 ta son berilsa 1 dan shu songacha 
//ko'paytmani, 2  ta son berilsa 1- sondan 2- songacha oraliqdagi 
//sonlar ko'paytmasini, 3 ta son berilsa shu sonlarni o'zini
// ko'paytmasini natija sifatida  qaytaruvchi multiplication() nomli funksiyani function overloading orqali  yozing.
// multiplication(5)     => 120 because => (1*2*3*4*5)
// multiplication(4,7)   => 840 because => (4*5*6*7)
// multiplication(2,8,5) => 80  because => (2*8*5) 
int findMax(int a1,int a2){
	if(a1>a2) return a1;
	return a2;
}
int findMax(int a1,int a2, int a3){
	int max=a1;
	if(max<a2){
		max=a2;
	}
	if(max<a3){
		max=a3;
	}
	return max;
}
int findMax(int a1,int a2,int a3,int a4,int a5){
	int max1=a1;
		if(max1<a2){
		max1=a2;
	}
	if(max1<a3){
		max1=a3;
	}
	if(max1<a4){
		max1=a4;
	}
	if(max1<a5){
		max1=a5;
	}
	return max1;
}
int multiplication(int z){
	int kupaytma=1,i=1;
	while(i<=z){
		kupaytma*=i;
		i++;
	}
	return kupaytma;
}
int multiplication(int z,int z1){
	int kupaytma1=1,i=z;
	while(i<=z1){
		kupaytma1*=i;
		i++;
	}
	return kupaytma1;
}
int multiplication(int z,int z1,int z2){

	return z*z1*z2;
}
int main(){
	cout<<"findMax \n";
	cout<<findMax(1,2)<<endl;
	cout<<findMax(1,2,4)<<endl;
	cout<<findMax(1,2,6,4,9)<<endl;
	cout<<"multiplication \n";
	cout<<multiplication(5)<<endl;
	cout<<multiplication(3,5)<<endl;
	cout<<multiplication(1,2,6)<<endl;
	
}

