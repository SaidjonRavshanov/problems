#include <iostream>
using namespace std;
int main(){
//3-vazifa
//
//1. Foydalanuvchi tomonidan sonlar kiritilaveradi. 
//Bu jarayon 0 kiritilguncha davom etadi. Shu kiritilgan 
//sonlarning nechta ekanini toping. Sanoqda 0 raqami hisobga olinmasin. 
//
//2. Foydalanuvchi tomonidan sonlar kiritilaveradi. 
//Bu jarayon 0 kiritilguncha davom etadi. Shu kiritilgan sonlarning 10 dan kattalarini sonini toping.
	int son;
	
	int a=0;
	while(true){
		cin>>son;
	   if(son==0){
	   	break; 
	   	cout<<"tugadi!!! \n";
	   } else a++;
		
	}cout<<a<<" ta son kiritildi ";
	  cout<<"\n---------------------------------------------------------------------------\n";
int s;

int t=0;
while(true){
cin>>s;
if(s==0){
	break; 
} else if(s>10) t++;
}cout<<t<<" ta 10 dan katta sonlar mavjud ";
	main();
	return 0;
	
}
