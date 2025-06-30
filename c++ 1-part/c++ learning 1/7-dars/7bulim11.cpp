#include <iostream>
using namespace std;
int main(){
//6 son berilgan. Shu sonlar ichidan eng kattasini aniqlang (basseyin logika).//
 
	//------------------------------------------------------------
	//1-misol
		int q,w,e,r,t,y;
		cout<<"6 ta son kiriting = ";
		cin>>q>>w>>e>>r>>t>>y;
		int aniqlash=q;
		if(aniqlash<w){
			aniqlash=w;
		}
		if(aniqlash<e){
			aniqlash=e;
		}
		if(aniqlash<r){
			aniqlash=r;
		}
		if(aniqlash<t){
			aniqlash=t;
		}
		if(aniqlash<y){
			aniqlash=y;
		}
		cout<<"max= "<<aniqlash<<" \n";
	//-----------------------------------------------------------
	//--------------------
	main();
	return 0;
	
}
