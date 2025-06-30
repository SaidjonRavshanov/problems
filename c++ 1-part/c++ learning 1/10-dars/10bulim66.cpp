#include <iostream>
using namespace std;
int main(){
//6-vazifa
//
//1. Barcha 2 xonali sonlar ichidan raqamlar ko'paytmasi 12 dan katta bo'lgan sonlarni miqdorini va yig'indisini aniqlang.
//
//2. Barcha 3 xonali sonlar ichidan o'nlar xonasi 2 ga yoki 5 ga teng bo'lgan sonlarni chiqaring.

cout<<"1. Barcha 2 xonali sonlar ichidan raqamlar ko'paytmasi 12 dan katta bo'lgan sonlarni miqdorini va yig'indisini aniqlang. \n";
int a=10;

int i=a;
int miqdor=0;
int summa=0;
while(i<=99){
	if((i/10%10)*(i%10)>12){
		miqdor++;
		summa+=i;
	}
	i++;
}cout<<"\n miqdor= "<<miqdor<<"\n yig'indi = "<<summa;
cout<<"\n 2. Barcha 3 xonali sonlar ichidan o'nlar xonasi 2 ga yoki 5 ga teng bo'lgan sonlarni chiqaring. \n";
 int l=100;
 
 int j=l;
 while(j<=999){
 	if((j/10%10)==2 || (j/10%10)==5 ){
 		cout<<j<<" ";
	 }
	 j++;
 }
	
	
	return 0;
}
