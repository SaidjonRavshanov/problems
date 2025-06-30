#include <iostream>
//#include <cctype>
using namespace std;
//3-vazifa
//
//1. 1 ta son berilgan. Berilgan sonni necha xonali ekanligini aniqlab beruvchi funksiya tuzib bering.
//
//2. 2 ta son berilgan. 1 chi son 2 chi sondan kichik. shu ikkala sonlar orasidagi toq sonlarni miqdorini aniqlab beruvchi funksiya tuzib bering.
//
//3. 1 ta son berilgan. Tub likga tekshirib beruvchi funksiya tuzib bering.
int nechixona(int son){
	int sanoq=0;
	while(true){
		if(son%10>=0) sanoq++;
		son/=10;
		if(son==0) break;
	}
	return sanoq;
}
int oraliqson(int c, int b){
	int sanoq1=0;
	for(int i=c+1; i<b;i++){
		if(i%2==1){
			sanoq1++;
		}
	}
	return sanoq1;
}
bool tubson(int tub){
	int sanoq2=0;
	for(int i=1;i<=tub;i++){
		if(tub%i==0) sanoq2++;
	}
	if(sanoq2>2) return false;
    else return true;
}
 int main(){
	int a,k,l,tb;
	cout<<" nechi xonalik ";
	cin>>a;
	cout<<"xonalar son "<<nechixona(a)<<endl;
	cout<<" k va l orasidagi toq sonlar uchun \nk= ";
	cin>>k;
	cout<<"l= ";
	cin>>l;
	cout<<"toq sonlar "<<oraliqson(k,l)<<endl;
	cout<<"tub son uchun ";
	cin>>tb;
    cout<<boolalpha<<tubson(tb)<<endl;
    
	main();
	return 0;
}
