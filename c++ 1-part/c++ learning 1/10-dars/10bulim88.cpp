#include <iostream>
using namespace std;
int main(){
//8-vazifa
//
//1. a soni berilgan. Shu sonni bo'luvchilarini chiqaring.
//
//2. a soni berilgan. Shu sonni bo'luvchilarini miqdorini chiqaring.
//
//3. a soni berilgan. Shu sonni bo'luvchilarini yig'indisini chiqaring.

cout<<" a soni berilgan. Shu sonni bo'luvchilarini chiqaring. \n";
int a;
cin>>a;
int i=1;
while(i<=a){
	if(a%i==0){
		cout<<i<<" ";
	}

	i++;
	
}
cout<<"\n a soni berilgan. Shu sonni bo'luvchilarini miqdorini chiqaring. \n";
int c;
cin>>c;
int j=1;
int summa=0;
while(j<=c){
	if(c%j==0){
		
		summa++;
	}

	j++;
	
} cout<<summa<<" ta bo'luvchisi bor ";
cout<<" \n a soni berilgan. Shu sonni bo'luvchilarini yig'indisini chiqaring. \n";
int s;
cin>>s;
int k=1;
int summa1=0;
while(k<=s){
	if(s%k==0){
		
		summa1+=k;
	}

	k++;
	
}cout<<summa1<<" ta bo'luvchisi bor ";
	
	return 0;
}
