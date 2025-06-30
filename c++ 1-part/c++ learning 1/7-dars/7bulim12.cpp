#include <iostream>
using namespace std;
int main(){
//4 son berilgan. Shu sonlar ichidan eng kichigini aniqlang (basseyin logika). 
	//------------------------------------------------------------
	//1-misol
		int q,w,e,r;
		cout<<"4 ta son kiriting = ";
		cin>>q>>w>>e>>r;
		int aniqlash=q;
		if(aniqlash>w){
			aniqlash=w;
		}
		if(aniqlash>e){
			aniqlash=e;
		}
		if(aniqlash>r){
			aniqlash=r;
		}
		
		cout<<"min= "<<aniqlash<<" \n";
	//-----------------------------------------------------------
	//--------------------
	main();
	return 0;
	
}
