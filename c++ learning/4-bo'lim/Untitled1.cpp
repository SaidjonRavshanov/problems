#include <iostream>
using namespace std;
//1-vazifa
//
//1. 2 ta float berilsa ham, 3 ta float berilsa ham, 2 ta string berilsa ham
// Add() funksiyasini yaratib bering overloading yordamida.
//
//2. Agar 2 ta a va b sonlari berilsa a soni b marta ekranga chiqaruvchi Agar 1 
//ta a soni berilsa a soni a marta ekranga chiqaruvchi repeat() nomli void funksiya (pratsedura) tuzib bering.
float Add(float a1,float a2){
	return a1+a2;
}
float Add(float a1,float a2,float a3){
	return a1+a2+a3;
}
string Add(string a1,string a2){
	return a1+a2;
}
int repeat(int a, int b){
	for(int i=1;i<=b;i++){
		cout<<a<<endl;
	}
}
int repeat(int a){
	for(int i=1;i<=a;i++){
		cout<<a<<endl;
	}
}
int main(){
	cout<<"ADD \n";
	cout<<Add(1.2,1.4,8.2)<<endl;
	cout<<Add(1.2,1.7)<<endl;
	cout<<Add("salom ","saidjon")<<endl;
	cout<<"repeat \n";
	cout<<repeat(2,5)<<endl;
	cout<<repeat(6)<<endl;
	
}

