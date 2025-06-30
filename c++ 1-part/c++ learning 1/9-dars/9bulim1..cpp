#include <iostream>
using namespace std;
int main(){
//2-vazifa
//
//Oy tartib raqamlari berilgan. Tartib raqamga qarab
//oy nomini ekranga chiqarib bering.
//1 => yanvar
//2 => fevral
//...
//12 => dekabr
int n;
cin>>n;
switch(n){
	case 1: cout<<"yanvar \n";
	break;
	case 2: cout<<"fevral \n";
	break;
	case 3: cout<<"mart \n";
	break;
	case 4: cout<<"aprel \n";
	break;
	case 5: cout<<"may \n";
	break;
	case 6: cout<<"iyun \n";
	break;
	case 7: cout<<"iyul \n";
	break;
	case 8: cout<<"avgust \n";
	break;
	case 9: cout<<"sentabr \n";
	break;
	case 10: cout<<"oktabr \n";
	break;
	case 11: cout<<"noyabr \n";
	break;
	case 12: cout<<"dekabr \n";
	break;
	default :
		cout<<" bunday oy raqam yoq \n";
		break;
	
}
	
	main();
	return 0;
}
