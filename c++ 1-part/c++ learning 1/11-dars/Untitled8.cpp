//8-vazifa
//
//1. a soni berilgan. Shu sonni bo'luvchilarini chiqaring.
//
//2. a soni berilgan. Shu sonni bo'luvchilarini miqdorini chiqaring.
//
//3. a soni berilgan. Shu sonni bo'luvchilarini yig'indisini chiqaring.
#include <iostream>
using namespace std;
int main(){

cout<<"\n---------------------------------------------------------------------------------------\n";
int a;
//int boluvchi;
cin>>a;
for(int i=1 ; i<=a ; i++){
      if(a%i==0){
      	cout<<i<<" ";
      	
	  }
} 

cout<<"\n---------------------------------------------------------------------------------------\n";
int a1;
int boluvchi=0;
cin>>a1;
for(int i=1 ; i<=a1 ; i++){
      if(a1%i==0){
      boluvchi++;
      	
	  }
} cout<<boluvchi<<" ta ";
cout<<"\n---------------------------------------------------------------------------------------\n";
int a2;
int sum=0;
cin>>a2;
for(int i=1 ; i<=a2 ; i++){
      if(a2%i==0){
      sum+=i;
      	
	  }
} cout<<sum<<" = sum ";
cout<<"\n---------------------------------------------------------------------------------------\n";



	
	
	
	
	return 0;
}
