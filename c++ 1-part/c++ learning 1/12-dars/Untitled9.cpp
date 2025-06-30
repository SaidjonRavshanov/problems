//9-vazifa
//
//1. 100 gacha bo'lgan barcha tub sonlarni ekranga chiqaring.
//
//2. a va b sonlari berilgan. a kichik b dan. a dan b gacha barcha tub sonlar
//ekranga chiqarilsin.
#include <iostream>
using namespace std;
int main(){
//for(int i=2; i<=100; i++){
//	bool p=true;
//	for(int j=2; j*j<=i; j++){
//		if(i%j==0){
//			p=false;
//			break;
//			}
//		}
//	
//	if(p){
//		cout<<i<<" ";
//	}
//}


//2-misol
int a,b;
cin>>a>>b;
for(int i=a; i<=b; i++){
	bool p=true;
	for(int j=2; j*j<=i; j++){
		if(i%j==0){
			p=false;
			break;
			}
		}
	
	if(p){
		cout<<i<<" ";
	}
}

return 0;
}

