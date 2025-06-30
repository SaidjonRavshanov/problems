#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int generat(int start , int finish){
	int number=rand()%(finish - start+1)+start;
	return number;
	
}
bool toqjuft(int toq){
	return toq%2!=0;//toq bo'lsa true
}
int main(){
	srand(time(0));
	int n;
	cout<<"massiv elementlari : ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		arr[i]=generat(3,100);
		cout<<arr[i]<<" ";
	} cout<<endl;
//	7-vazifa
//
//1. N ta elementdan iborat 1 o‘lchamli massive berilgan.
// Oxirgi elementida katta bo‘lgan elementlarni yig‘indisini aniqlang.
//
int summa=0;
for(int i=0;i<n-1;i++){
	if(arr[n-1]<arr[i]) summa+=arr[i];
} cout<<"Oxirgi elementida katta bo‘lgan elementlarni yig‘indisi = "<<summa<<endl;
//2. N ta elementdan iborat 1 o‘lchamli massive berilgan. 
//Agar barcha elementni 4 ga yoki 3 ga karrali bo‘lsa "hello" aks holda "salom" ni chiqaring.
	int sanoq=0;
	for(int i=0;i<n;i++){
		if(arr[i]%4==0 || arr[i]%3==0){
			sanoq++;
		}
	} cout<<((sanoq==n)? " hello " : " salom ")<<endl;
	
	
	
	
	
}
