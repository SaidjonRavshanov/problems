#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int generat(int start , int finish){
	int number=rand()%(finish - start+1)+start;
	return number;
	
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
	

//1. N ta elementdan iborat 1 o‘lchamli massive berilgan. 3 ga va 7 ga karrali elementlarini miqdorini toping.

int miqdor=0;
for(int i=0;i<n;i++){
	if(arr[i]%21==0/*3*7 chunki ikkalasi ham tub */) miqdor++;
}cout<<"\n";
cout<<"3 va 7 ga karrali sonlar miqdori : "<<miqdor<<endl;
//2. N ta elementdan iborat 1 o‘lchamli massive berilgan. 2 xonali toq elementlarini miqdorini va yig‘indisini toping.
//
miqdor=0;
int summa=0;
for(int i=0;i<n;i++){
	if(10<=arr[i] && arr[i]<=99) {
		if(arr[i]%2==1){
			summa+=arr[i];
			miqdor++;
		}
} 
}cout<<"\n";
cout<<" 2 xonali toq elementlar miqdori : "<<miqdor<<"| 2 xonali toq elementlar yig'indisi : "<<summa<<endl;

//3. N ta elementdan iborat 1 o‘lchamli massive berilgan. 1 chi va oxirgi elementlarini almashtiring va ekranga massiveni chiqaring.
//int temp = arr[0];
//    arr[0] = arr[n - 1];
//    arr[n - 1] = temp;
    swap(arr[0], arr[n-1]);   
    for(int i=0;i<n;i++){
		              
    	cout<<arr[i]<<" ";
    	
	}
}

