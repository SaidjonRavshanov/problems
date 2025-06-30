#include <iostream>
using namespace std;
int main(){
//9-vazifa
//
//3 xonali son berilgan. Agar shu sonni raqamlari bir xil bo'lsa o'nlar xonasidagi raqamni,
// aks holda birlar xonasidagi raqamni ekranga chiqaring.
 
	//------------------------------------------------------------
	//1-misol
		int q;
	cout<<" 3 xonali son kiriting ";
	cin>>q;
	if(q/100%10==q%10 && q%10==q/10%10 ){
		cout<<q/10%10<<"\n";
	} else cout<< q%10 <<" \n";
  
	//-----------------------------------------------------------
	//--------------------
	main();
	return 0;
	
}
