#include <iostream>
#include <math.h>
using namespace std;
//2-vazifa
//
//1. 1 ta butun son berilgan. 1 dan shu songacha barcha butun sonlarni ekranga chiqaruvchi funksiya tuzib bering.
//
//2. 1 ta son berilgan. Shu sonni bo'luvchilarini ekranga chiqaruvchi funksiya tuzib bering
//
void oraliqson(int a){
	cout<<"1 dan "<<a<<" son orasidagi sonlar ";
	for(int i=1 ; i<a ; i++){
		cout<<i<<" ";
	}
	
}
void bulinmalar(int b){
	cout<<" bo'linuvchilar ";
	for(int i=1 ; i<=b ; i++){
		if(b%i==0){
			cout<<i<<" ";
		}
	}
}
int main(){
	int s1;
	cin>>s1;
	oraliqson(s1);
    int s2;
	cin>>s2;
	bulinmalar(s2);
}
