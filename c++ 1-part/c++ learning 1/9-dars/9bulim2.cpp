#include <iostream>
using namespace std;
int main(){
//3-vazifa
//
//1 ta raqam berilgan [1-9] oraliqda. Shu raqamni so'z qilib chiqarib bering.
//1 => bir
//2 => ikki
//...
//9 => to'qqiz

int n;
cin>>n;
switch(n){
	case 1: cout<<"bir \n";
	break;
	case 2: cout<<"ikki \n";
	break;
	case 3: cout<<"uch \n";
	break;
	case 4: cout<<"to'rt' \n";
	break;
	case 5: cout<<"besh \n";
	break;
	case 6: cout<<"olti \n";
	break;
	case 7: cout<<"yetti \n";
	break;
	case 8: cout<<"sakkiz \n";
	break;
	case 9: cout<<"to'qqiz' \n";
	break;
	
	default :
		cout<<" [1-9] oraliqda son kiriting \n";
		break;
	
}
	
	main();
	return 0;
}
