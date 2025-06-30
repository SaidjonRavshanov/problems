#include <iostream>
using namespace std;
int main(){
//5-vazifa
//
//1. Foydalanuvchi tomonidan sonlar kiritilaveradi. 
//Bu jarayon 0 kiritilguncha davom etadi. Shu kiritilgan sonlarning 50 dan kattalarini yig'indisini toping. 
//
//2. Foydalanuvchi tomonidan sonlar kiritilaveradi. 
//Bu jarayon juft son kiritilguncha davom etadi. Shu kiritilgan sonlarning miqdorini toping.

	int son;

	int a=0;
	while(true){
		cin>>son;
		if(son==0) break;
		if(son>50) a+=son;
		
	}cout<<a<<" 50 dan katta sonlar yig'indisi ";
	
	  cout<<"\n---------------------------------------------------------------------------\n";
	  int son1;
	  int miqdor=0;
	  while(true){
	  	cin>>son1;
	  
	  	miqdor++;
		  	if(son1%2==0) break;
	  }cout<<miqdor<<" ta toq son kiritildi ";
	main();
	return 0;
	
}
