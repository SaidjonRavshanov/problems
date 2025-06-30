#include <iostream>
using namespace std;
int main(){
//3 xonali son berilgan. Agar shu son chapdan ham o'ngdan ham bir hil o'qilsa raqamlar yig'indisini,
// aks holda raqamlar ko'paytmasini ekranga chiqaruvchi dastur tuzing
 
	//------------------------------------------------------------
	//1-misol
		int q;
	cout<<" 3 xonali son kiriting ";
	cin>>q;
	if(q/100%10==q%10 ){
		cout<<q/10%10+q/100%10+q%10<<"\n";
	} else cout<<q/10%10*q/100%10*q%10 <<" \n";
  
	//-----------------------------------------------------------
	//--------------------
	main();
	return 0;
	
}
