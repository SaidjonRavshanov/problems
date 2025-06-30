#include <iostream>
using namespace std;
int main(){
//5 xonali son berilgan. Shu son ichidagi eng katta raqamni aniqlang (basseyin logika)	//------------------------------------------------------------
	//1-misol
		int q;
		cout<<"5 xonali son kiriting = ";
		cin>>q;
		int bir=q%10;
		int on=q/10%10;
		int yuz=q/100%10;
		int ming=q/1000%10;
		int onming=q/10000%10;
		int max=bir;
		if(q>=10000 && q<=99999){
		    	if(max<on){
				max=on;
			}
				if(max<yuz){
				max=yuz;
			}
				if(max<ming){
				max=ming;
			}
				if(max<onming){
				max=onming;
			}
			cout<<" eng katta raqami = "<<max<<"\n";
		} else cout<<"5 xonali son kiritmadingiz!!! \n";
		//----------------------------------------------------------
	//--------------------
	main();
	return 0;
	
}
