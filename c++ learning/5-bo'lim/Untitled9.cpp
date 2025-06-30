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
//	9-vazifa
//
//1. N ta elementdan iborat 1 o‘lchamli massive berilgan. 
//Elementlar yig‘indisini aniqlang
//
//int summa=0;
//for(int i=0;i<n;i++){
//	summa+=arr[i];
//}cout<<"yig'indi : '"<<summa<<endl;
//2. n ta elementdan tashkil topgan massiv berilgan. 
//Massiv elementlari orasidan yig'indisi eng katta bo'ladigan 2 ta qo'shni 
//elementni chiqaruvchi  programma tuzilsin.
//
int max=arr[0]+arr[1];
int index=0;
for(int i=2;i<n-1;i++){
	
	if(arr[max]<arr[i]+arr[i+1]){
		arr[max]=arr[i]+arr[i+1];
		index=i;
	}

}	cout<<arr[index]<<" + "<<arr[index+1]<<" = "<<arr[index+1]+arr[index]<<endl;
//3. n ta elementdan tashkil topgan massiv berilgan. Massiv elementlari 
//orasidan chap qo'shnisidan katta bo'lganlar sonini chiqaruvchi programma tuzilsin.
	int sanoq=0;
	for(int i=0;i<n-1;i++){
		if(arr[i]<arr[i+1]) sanoq++;
	} cout<<" chap qo'shnisidan kattaelemntlar soni : "<<sanoq<<endl;
	
	
	
	
	main();
}
