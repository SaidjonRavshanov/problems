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
	int arr1[n];
	for(int i=0;i<n;i++){
		arr[i]=generat(3,100);
		cout<<arr[i]<<" ";
	} cout<<endl;
//	11-vazifa
//
//1. n ta butun sonlardan iborat massiv berilgan.
// Massivdagi har bir juft sonni birinchi uchragan juft songa orttiruvchi programma tuzilsin.
//
int juft=0;
for(int i=0;i<n;i++){
	if(arr[i]%2==0){
		 juft=arr[i];
		break;
	} 
} cout<<" \nbirnchi uchragan juft son "<<juft<<endl;
for(int i=0;i<n;i++){
if(arr[i]%2==0){
		arr[i]*=juft;
	}
	cout<<arr[i]<<" ";
}
//2. n ta butun sonlardan iborat massiv berilgan. 
//Massivdagi har bir toq sonni oxirgi toq songa orttiruvchi programma tuzilsin.
//
int toq=0;
for(int i = n - 1; i >= 0; i--){
	if(arr[i]%2==1){
		 toq=arr[i];
		break;
	} 
}cout<<" \n axirgi uchragan toq son "<<toq<<endl;
for(int i=0;i<n;i++){
	if(arr[i]%2==1) arr[i]*=toq;
	cout<<arr[i]<<" ";
}cout<<endl;
//3. n ta elementdan tashkil topgan massiv berilgan.
// Massivning juft indeksli elementlari orasidan kichigini aniqlovchi programma tuzilsin. min(a0, a2, a4, ...)
int min=0;
cout<<"tepadagi massivning juft indexli elementlari : \n";
	for(int i=0;i<n;i++){
		if(i%2==0){
			arr1[i]=arr[i];
		 cout<<arr1[i]<<" ";
		  min=arr1[0];
		 if(min>arr1[i]){
		 	min=arr1[i];
		 }
	} 
	
}cout<<endl<<"juft indexli elementlari ichida kichik elementi "<<min<<endl;
	
	
	
}
