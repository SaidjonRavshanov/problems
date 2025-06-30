#include <iostream>
using namespace std;
int main(){
//8-vazifa
//
//Fasl tartib raqamlari berilgan.
// Tartib raqamga qarabfasl nomini ekranga chiqarib bering.
//1 => qish
//2 => bahor
//3 => yoz
//4 => kuz

int n;
cin>>n;
switch(n){
	case 1: cout<<"qish"<<"\n"; break;
	case 2: cout<<"bahor"<<"\n"; break;
	case 3: cout<<"yoz"<<"\n"; break;
	case 4: cout<<"kuz"<<"\n"; break;
	default :
		cout<<"bunday fasl yoq \n";
		break;
}

	
	main();
	return 0;
}
