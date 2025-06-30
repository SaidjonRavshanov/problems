#include <iostream>
using namespace std;
int main(){
//2-vazifa
//
//1. 10 dan 50 gacha toq sonlarni ekranga chiqaring.
//2. 120 dan 250 gacha juft sonlarni ekranga chiqaring.
//3. 100 dan 50 gacha toq sonlarni ekranga chiqaring.
//4. 80 dan 20 gacha juft sonlarni ekranga chiqaring.

int i=10;
cout<<"1. 10 dan 50 gacha toq sonlarni ekranga chiqaring. \n";
	while(i<=50){
	if(i%2==1){
			cout<<i<<" ";
	}
	
		++i;
	
	}
	cout<<" \n";
	cout<<"2. 120 dan 250 gacha juft sonlarni ekranga chiqaring. \n";
	int j=120;
	while(j<=250){
		if(j%2==0){
			cout<<j<<" ";
		}
		
		++j;
	}
	cout<<" \n";
	int a=100;
cout<<"3. 100 dan 50 gacha toq sonlarni ekranga chiqaring. \n";
	while(a>=50){
	if(a%2==1){
			cout<<a<<" ";
	}
	
		--a;
	
	}
	cout<<" \n";
	cout<<"4. 80 dan 20 gacha juft sonlarni ekranga chiqaring. \n";
	int c=80;
	while(c>=20){
		if(c%2==0){
			cout<<c<<" ";
		}
		
		--c;
	}

	
	
	
	return 0;
}
