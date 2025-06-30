#include <iostream>
using namespace std;
int main(){
//2-vazifa
//
//1. 1 ta son berilgan. Berilgan sonda juft raqamlar miqdorini aniqlang.
//
//2. 1 ta son berilgan. Berilgan sonda toq raqamlar miqdorini aniqlang.
	int son;
	cin>>son;
	int a=0;
	while(true){
		
		if(son%2==0)  a++;
	    son/=10;
		if(son==0)  break;
		
	}cout<<a<<" ta juft xonasi mavjud ";
	  cout<<"\n---------------------------------------------------------------------------\n";
int s;
cin>>s;
int toq=0;
while(true){
	if(s%2!=0) toq++;
	s/=10;
	if(s==0) break;
}cout<<toq<<" ta toq xonasi mavjud ";
	main();
	return 0;
	
}
