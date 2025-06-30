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
//	5-vazifa
//
//1. N ta elementdan iborat 1 o‘lchamli massive berilgan. Agar dastlabki 2 ta elementni juft va oxirgi 2 ta elementi toq bo‘lsa true aks holda false chiqaring
//
cout<<boolalpha<<((arr[0]%2==0 && arr[1]%2==0 && arr[n-1]%2!=0 && arr[n-2]%2!=0)? true : false)<<endl;
//2. N ta elementdan iborat 1 o‘lchamli massive berilgan. Eng kichik elementini aniqlang.
//
int min=arr[0];
for(int i=1;i<n;i++){
	
	if(min>arr[i]){
		min=arr[i];
	}
} cout<<"eng kicik elementi : "<<min<<endl;
//3. N ta elementdan iborat 1 o‘lchamli massive berilgan. Eng katta va eng kichik elementini yig‘indisini aniqlang.
	
 int max=arr[0];
for(int i=1;i<n;i++){
	
	if(max<arr[i]){
		max=arr[i];
	}
} cout<<"eng katta elementi : "<<max<<endl;
	cout<<min<<" + "<<max<<" = "<<max+min<<endl;
	
	
	main();
}
