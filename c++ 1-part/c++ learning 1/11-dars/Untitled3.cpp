#include <iostream>
using namespace std;
int main(){
//3-vazifa
//
//1. a va b sonlari berilgan. a kichik b dan. a dan b gacha 3 ga karrali sonlarni chiqaring.
//
//2. a va b sonlari berilgan. a kichik b dan. a dan b gacha 5 va 6 ga karrali sonlarni chiqaring.
	int a,b;
	cin>>a>>b;
	
	for(int i=a; i<=b ; i++){
	if(i%3==0){
		cout<<i<<" ";
	}
		
	}
cout<<"\n---------------------------------------------------------------------------------------\n";
	for(int i=a; i<=b ; i++){
		if(i%30==0){
			cout<<i<<" ";
		}
		
	}
cout<<"\n---------------------------------------------------------------------------------------\n";



	
	
	
	
	return 0;
}
