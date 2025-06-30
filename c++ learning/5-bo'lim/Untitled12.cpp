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
	int arr3[n];
	for(int i=0;i<n;i++){
		arr[i]=generat(3,100);
		cout<<arr[i]<<" ";
	} cout<<endl;
	for(int i=0;i<n;i++){
		arr1[i]=generat(3,100);
		cout<<arr1[i]<<" ";
	} cout<<endl;
//	12-vazifa
//
//1.n ta elementdan tashkil topgan a va b massiv berilgan. c massivni hosil qiling. 
//c[i] = max(a[i], b[i]), ya'ni c massivning i-elementi a va b massivlarning i-elementlaridan kattasini qabul qilsin.
//
for(int i=0;i<n;i++){
	arr3[i]=max(arr[i],arr1[i]);
	cout<<arr3[i]<<" ";
}

//2.n ta elementdan iborat butun sonlardan tashkil topgan a massiv berilgan. 
//a massivning juft elementlaridan tashkil topgan b massivini hosil qiling. b massiv elementlari soni va elementlari chiqarilsin.
	cout<<"\n2-msol cuhun \n yangi massiv elementlari : ";
	int sanoq=0;
	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
			sanoq++;
			arr1[i]=arr[i];
			cout<<arr1[i]<<" ";
		}
	} cout<<"\nyangi massiv elementlar soni : "<<sanoq<<endl;
	
	
	
	
	
}
