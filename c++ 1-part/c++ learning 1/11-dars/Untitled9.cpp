
#include <iostream>
using namespace std;
int main(){
//9-vazifa
//
//1. a soni berilgan. Shu sonni tublikga tekshiring. Agar tub bo'lsa true, aks holda false chiqsin.
//
//2. a va b soni berilgan. Agar 2 lasi ham tub bo'lsa ularni summasini, aks holda ko'paytmasini chiqaring.
//cout<<"\n---------------------------------------------------------------------------------------\n";
//int a;
//int boluvchi=0;
//cin>>a;
//for(int i=1 ; i<=a ; i++){
//        if(a%i==0){
//        	boluvchi++;
//		}
//} cout<<boolalpha<<((boluvchi==2)? true : false);

cout<<"\n---------------------------------------------------------------------------------------\n";
int a1,b1;
cin>>a1>>b1;
int miq1=0,miq2=0;
for(int i=1 ; i<=a1 ; i++){
	if(a1%i==0){
		miq1++;
	}
}
for(int i=1 ; i<=b1 ; i++){
	if(b1%i==0){
		miq2++;
	}
}cout<<((miq1==miq2)? a1+b1  : a1*b1 );

cout<<"\n---------------------------------------------------------------------------------------\n";



	
	
	
	
	return 0;
}
