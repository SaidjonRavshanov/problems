#include <iostream>
#include <ctime>
#include <cstdlib> 
using namespace std;
int generaterand(int start,int finish){
	int number=rand()%(finish-start+1)+start;
	return number;
}
int main(){
	srand(time(0));
	int n;
	cout<<"massiv elemntlar : ";
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		arr[i]=generaterand(90,150);
		cout<<arr[i]<<" ";
		
	}cout<<"\n";
	

//1-vazifa
//
//1. N ta elementdan iborat 1 o‘lchamli massive berilgan. 3 xonali elementlarini miqdorini toping.
//
int miqdor=0;
for(int i=0;i<n;i++){
	if(100<=arr[i] && arr[i]<=999) miqdor++;
} cout<<"3 xonali sonlar "<<miqdor<<" \n";

//2. N ta elementdan iborat 1 o‘lchamli massive berilgan. Juft elementlarini miqdorini toping.
//
miqdor=0;
for(int i=0;i<n;i++){
	if(arr[i]%2==0) miqdor++;
}
cout<<"juft sonlar miqdori "<<miqdor<<" \n";
//3. N ta elementdan iborat 1 o‘lchamli massive berilgan. Toq elementlarini yig‘indisini toping.
int summa=0;
for(int i=0;i<n;i++){
	if(arr[i]%2==1) summa+=arr[i];
}
cout<<"toq elementlar yig'indisi "<<summa<<"\n";
}
