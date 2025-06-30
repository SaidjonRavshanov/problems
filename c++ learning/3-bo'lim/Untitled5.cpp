#include <iostream>
#include <math.h>
using namespace std;
//5-vazifa
//
//1. 1 kg go'sht narxi berilgan. 30, 31, 32 ... 60 kg go'sht
// narxini ekranga chiqarib beruvchi funksiya tuzib bering.
//
//2. Barcha 2 xonali sonlar ichida raqamlar yig’indisi 8 dan
// katta bo’lgan  barcha sonlarni ekranga chiqaruvchi funksiya tuzib bering. 
void narx(double narx1){
	for(int i=30; i<=60 ; i++){
		cout<<i<<" kg go'sht narxi : "<<narx1*i<<" so'm \n";
	}
}
void ikkixona(int son){
	for(int i=10 ; i<=99 ; i++){
		if(i%10+i/10>8){
			cout<<"yig'indisi 8 dan katta 2 xonai son "<<i<<endl;
		}
	}
}
int main(){
	double narxi;
	cout<<"go'sht narxi: ";
	cin>>narxi;
	narx(narxi);
	cout<<"\n------------- \n";
	int son1;
	ikkixona(son1);
}
