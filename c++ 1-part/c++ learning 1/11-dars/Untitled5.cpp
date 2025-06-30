#include <iostream>
using namespace std;
int main(){
//6-vazifa
//
//1. Barcha 2 xonali sonlar ichidan raqamlar ko'paytmasi 15 dan katta bo'lgan sonlarni miqdorini va yig'indisini aniqlang.
//
//2. Barcha 3 xonali sonlar ichidan o'nlar xonasi 4 ga yoki 7 ga teng bo'lgan sonlarni chiqaring.

cout<<"\n---------------------------------------------------------------------------------------\n";
int summa=0,miqdor=0;
for(int i=10 ; i<=99 ; i++){
	int a=i/10;
	int b=i%10;
	if(a*b>15){
		miqdor++;
		summa+=i;
	}
}
cout<<"miqdor = "<<miqdor<<"\nsumma= "<<summa;
cout<<"\n---------------------------------------------------------------------------------------\n";
for(int i=100 ; i<=999 ; i++){
	int s=i/10%10;
	if(s==4 || s==7){
		cout<<i<<" ";
	}
}
cout<<"\n---------------------------------------------------------------------------------------\n";

cout<<"\n---------------------------------------------------------------------------------------\n";



	
	
	
	
	return 0;
}
