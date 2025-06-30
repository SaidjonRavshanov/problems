#include <iostream>
using namespace std;
int main(){
//4-vazifa
//
//1. Foydalanuvchi tomonidan sonlar kiritilaveradi.
// Bu jarayon 0 kiritilguncha davom etadi. Shu kiritilgan sonlarning yig'indisni toping.  
//
//2. Foydalanuvchi tomonidan sonlar kiritilaveradi.
// Bu jarayon 0 kiritilguncha davom etadi. Shu kiritilgan sonlarning ko'paytmasini toping. Ko’paytmada 0 raqami hisobga olinmasin. 
int a;

int summa=0;
while(true){
	cin>>a;
    if(a==0) break;
    summa+=a;
    
}cout<<summa<<"= yig'indi";

cout<<"\n-------------------------------------------------------------------------\n";
int a1;
int k=1;
while(true){
	cin>>a1;
	if(a1==0) break;
	k*=a1;
} cout<<k<<" = ko'paytma ";
	return 0;
	
}
