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
		arr[i]=generat(10,50);
		cout<<arr[i]<<" ";
	} cout<<endl;
//	4-vazifa
//
//1. N ta elementdan iborat 1 o‘lchamli massive berilgan. Juft elementlarini 3 barobarga oshiring.
//

for(int i=0;i<n;i++){
		if(arr[i]%2==0) arr[i]*=3;
		cout<<arr[i]<<" ";
	} cout<<endl;
//2. N ta elementdan iborat 1 o‘lchamli massive berilgan. Agar hamma elementi 5 ga karrali bo‘lsa true aks holda false chiqaring.
//
int sanoq=0;
for(int i=0;i<n;i++){
	if(arr[i]%5==0) sanoq++;
} cout<<boolalpha<<((sanoq==n)? true : false)<<endl;
//3. N ta elementdan iborat 1 o‘lchamli massive berilgan. Agar dastlabki 3 ta elementi 2 xonali bo‘lsa true aks holda false chiqaring.
	 sanoq=0;
	for(int i=0;i<n;i++){
		if(i<=2){
			if(10<=arr[i] && arr[i]<=99) sanoq++ ;
		}
	}  cout<<boolalpha<<((sanoq==3)? true : false);

	
	
	
	
	
	
	
}
