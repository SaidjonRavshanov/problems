//12-vazifa
//
//1. 1 kg konfet narxi berilgan (haqiqiy son). 1.1, 1.2, …, 2 kg konfet narxlarini ekranga chiqaruvchi programma tuzilsin.
//
//2. 0 dan N sonigacha bo’lgan barcha butun sonlarni ildizlarini ekranga chiqaruvchi dastur tuzing (N>1). 

#include <iostream>
using namespace std;
#include <math.h>

int main(){
	int narx;
	cin>>narx;

cout<<"\n---------------------------------------------------------------------------------------\n";
for(float i=1.1; i<=2.1; i+=0.1){
      cout<<i*narx<<" ";
}cout<<"\n---------------------------------------------------------------------------------------\n";
int n;
cin>>n;
for(int i=0 ; i<=n ; i++){
	cout<<sqrt(i)<<" \n";
}

cout<<"\n---------------------------------------------------------------------------------------\n";



	
	
	
	
	return 0;
}
