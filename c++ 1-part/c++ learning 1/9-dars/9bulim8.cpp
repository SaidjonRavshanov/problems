#include <iostream>
using namespace std;
int main(){
//9-vazifa
//
//Kichik pul o'tkazma qilib bering. Sizning pulingiz so'mda.
// Uni dollarga, yevroga, rublga o'tgazib beruvchi dastur tuzing.
//(consoledan pul miqdori va pul birligi kirib keladi)

int n;
double sum;
cout<<"valyuta almashtirish so'mni -> dollor, yevro, rublga aylantiradi !!! \n";
cout<<"so'm = ";
cin>>sum;
cout<<"valyuta tanlang 1->dollor, 2->yevro, 3->rubl \n";
cin>>n;
switch(n){
	case 1: cout<<sum/12636<<" dollor \n"; break;
	case 2: cout<<sum/13820<<" dollor \n"; break;
	case 3: cout<<sum/13823<<" dollor \n"; break;
	default :
		cout<<"bunday valyuta mavjud emas!!! ";
		break;

}

	
	main();
	return 0;
}
