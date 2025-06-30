#include <iostream>
using namespace std;
int main(){
//	1-vazifa
//
//1. 1 ta son berilgan. Berilgan sonni necha xonali eknaligini aniqlang.
//
//2. 1 ta son berilgan. Berilgan sonni raqamlar yeg'indisini aniqlang.
	int son;
	cin>>son;
	int a=0;
	while(true){
		son/=10;
		a++;
		if(son==0)  break;
		
	}cout<<a<<" xonalik ";
	  cout<<"\n---------------------------------------------------------------------------\n";
	  int son1;
	  cin>>son1;
	  int summa=0;
	  while(true){
	  	int birlar=son1%10;//231
	  	son1/=10;
	  	summa+=birlar;
	  	if(son1==0) break;
	  } cout<<" yig'indi = "<<summa;
	main();
	return 0;
	
}
