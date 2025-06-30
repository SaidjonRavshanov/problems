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
		arr[i]=generat(-100,100);
		cout<<arr[i]<<" ";
	} cout<<endl;
//6-vazifa
//
//1. N ta elementdan iborat 1 o‘lchamli massive berilgan. Barcha 2 xonali elementlarni qiymatini 100 ga oshiring.
//
for(int i=0;i<n;i++){
	if(10<=arr[i] && arr[i]<=99){
		arr[i]+=100;
	} cout<<arr[i]<<" ";
} cout<<endl;
//2. N ta elementdan iborat 1 o‘lchamli massive berilgan. Musbat va Manfiy elementlarini miqdorini aniqlang.
//
int manmiqdor=0;
int musmiqdor=0;
for(int i=0;i<n;i++){
	if(arr[i]>0){
		musmiqdor++;
	} else if(arr[i]<0){
		manmiqdor++;
	}
}cout<<"musbat lementlari "<<musmiqdor<<" ta | "<<"manfiy elementlari "<<manmiqdor<<" ta | "<<"va "<<n-(manmiqdor+musmiqdor)<<" ta nol "<<endl;
//3. N ta elementdan iborat 1 o‘lchamli massive berilgan. 1 chi elementidan kichik bo‘lgan elementlarni miqdorini aniqlang.	
	int miqdor=0;
	for(int i=1;i<n;i++){
		if(arr[0]>arr[i]) miqdor++;
	} cout<<" birinchi elemntidan kichik elementlar miqdori "<<miqdor<<endl;
	
	
	
	
	
}
