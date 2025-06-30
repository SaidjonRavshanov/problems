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
//	srand(time(0));
	int n;
	cout<<"massiv elementlari : ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		//arr[i]=generat(3,100);
		
		cout<<"arr["<<i<<"] : ";
		cin>>arr[i];
	} cout<<endl;
//	8-vazifa
//
//1. N ta elementdan iborat 1 o‘lchamli massive berilgan. 
//Agar elementlari o‘suvchi bo‘lsa true aks holda false chiqaring.
//
int sanoq=0;
for(int i=0; i<n-1 ;i++){
	if(arr[i]<arr[i+1])sanoq++;
} cout<<((sanoq==n-1)? "true" : "false")<<endl;
//2. N ta elementdan iborat 1 o‘lchamli massive berilgan. 
//Agar elementlari kamayuvchi bo‘lsa true aks holda false chiqaring.
//
sanoq=0;
for(int i=0; i<n-1 ;i++){
	if(arr[i]>arr[i+1])sanoq++;
} cout<<((sanoq==n-1)? "true" : "false")<<endl;

//3. N ta elementdan iborat 1 o‘lchamli massive berilgan. 
//Eng katta elementi bilan eng kichik elementini joyini almashtiring. Va massiveni chiqaring.
    int min=arr[0]; int max=arr[0];
	for(int i=0;i<n;i++){
		if(arr[min]<arr[i]){
			min=i;
		}if(arr[max]>arr[i]){
			max=i;
		}
	}
	    
	cout<<"max "<<arr[min]<<"| min "<<arr[max]<<endl;

	swap(arr[min],arr[max]);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	
	main();
	
}
