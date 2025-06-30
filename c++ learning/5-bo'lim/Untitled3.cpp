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
	
//
//
//1. N ta elementdan iborat 1 o‘lchamli massive berilgan.
// Dastlabki 3 ta elementini yig‘indisini toping.
//
int summa=0;
for(int i=0;i<n;i++){
	if(i<=2) summa+=arr[i];
}
cout<<"dastlabki 3 ta element yig'indisi : "<<summa<<endl;
//2. N ta elementdan iborat 1 o‘lchamli massive berilgan.
// Oxirgi 3 ta elementini yig‘indisi toping.
//
 summa=0;
for(int i=0;i<n;i++){
	if(n-4<i) summa+=arr[i];

}
cout<<"axirgi 3 ta element yig'indisi : "<<summa<<endl;

//3. N ta elementdan iborat 1 o‘lchamli massive berilgan.
// Toq elementlar bn Juft elementlarini taqqoslang. Agar toqlari ko‘p bo‘lsa true aks holda false chiqaring.
int toqsanoq=0,juftsanoq=0;
	for(int i=0;i<n;i++){
		if(toqjuft(arr[i]))
		{
			toqsanoq++;
		} else juftsanoq++;
	} cout<<boolalpha<<((toqsanoq>juftsanoq)? true : false);
	
	
	
	
	
	
	
	
}
