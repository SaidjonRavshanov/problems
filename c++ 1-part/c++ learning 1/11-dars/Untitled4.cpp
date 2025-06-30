#include <iostream>
using namespace std;
int main(){
//4-vazifa
//
//1. a va b sonlari berilgan. a kichik b dan. Shu sonlar orasidagi 10 ga karrali sonlarni miqdorini aniqlang.
//
//2. a va b sonlari berilgan. a kichik b dan. b dan a gacha 7 ga yoki 8 ga bo'linadigan sonlarni ekranga chiqaring.
//
//3. 1 dan 100 gacha juft sonlarni yig'indisini aniqlang.
	int a,b;
	cin>>a>>b;
	int miqdor=0;
	for(int i=a; i<=b ; i++){
	if(i%10==0){
		miqdor++;
//		cout<<i<<" ";
	}
		
	}cout<<miqdor<<" ta ";
cout<<"\n---------------------------------------------------------------------------------------\n";
	int a1,b1;
	cin>>a1>>b1;
	for(int i=b1; i>=a1 ; i--){
		if(i%7==0 || i%8==0){
			cout<<i<<" ";
		}
		
	}
cout<<"\n---------------------------------------------------------------------------------------\n";
cout<<"\n---------------------------------------------------------------------------------------\n";
	int summa=0;
	for(int i=0; i<=100 ; i+=2){
		summa+=i;
		
	}cout<<summa<<" = yig'indi ";
cout<<"\n---------------------------------------------------------------------------------------\n";



	
	
	
	
	return 0;
}
