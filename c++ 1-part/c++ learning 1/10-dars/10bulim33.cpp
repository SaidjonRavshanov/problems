#include <iostream>
using namespace std;
int main(){
//3-vazifa
//
//1. a va b sonlari berilgan. a kichik b dan. a dan b gacha 3 ga karrali sonlarni chiqaring.
//
//2. a va b sonlari berilgan. a kichik b dan. a dan b gacha 4 va 7 ga karrali sonlarni chiqaring.
cout<<"1. a va b sonlari berilgan. a kichik b dan. a dan b gacha 3 ga karrali sonlarni chiqaring. \n";
int a,b;
cin>>a>>b;
int i=a;
while(i<=b){
	if(i%3==0){
		cout<<i<<" ";
	}
	i++;
}
cout<<"\n 2. a va b sonlari berilgan. a kichik b dan. a dan b gacha 4 va 7 ga karrali sonlarni chiqaring. \n";
 int l,k;
 cin>>l>>k;
 int j=l;
 while(j<=k){
 	if(j%28==0){
 		cout<<j<<" ";
	 }
	 j++;
 }
	
	
	
	return 0;
}
