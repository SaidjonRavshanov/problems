#include <iostream>
using namespace std;
int main(){
	double pul;
	cout<<"pulni kiritng \nbu dastur yevrodan dollorga, dollordan yevroga ,sumdan rublga , rubldan sumga o'tkazadi \n ";
	cout<<"pulni kiriting = ";
	cin >>pul;
	cout<<"sizni pulingiz qaysi valyutada ? \nr=>rubl\nd=>dollor\ny=>yevro\ns=>sum\n ";
	char valyuta;
	cout<<"valyuta = ";
	cin>>valyuta;
	cout<<"qaysi valyutaga o'tkazamiz? \nr=>rubl\nd=>dollor\ny=>yevro\ns=>sum\n ";
	char valyuta2;
	cout<<"valyuta2 = ";
	cin>>valyuta2;
	switch(valyuta){
		case 'r' : switch(valyuta2){
			case 'r' : cout<<"pulingiz rublda turibdi!!! \n";
			break;
			case 's' : cout<<pul*137.22<<" so'm \n";
			break;
			case 'd' : cout<<pul*0.01<<" dollor \n";
			break;
			case 'y' : cout<<pul*0.00993<<" yevro \n";
			break;
		} break;
			case 's' : switch(valyuta2){
			case 's' : cout<<"pulingiz so'mda' turibdi!!! \n";
			break;
			case 'r' : cout<<pul*0.00729<<" rubl \n";
			break;
			case 'd' : cout<<pul*0.000079<<" dollor \n";
			break;
			case 'y' : cout<<pul*0.0000723<<" yevro \n";
			break;
		} break;
			case 'd' : switch(valyuta2){
			case 'd' : cout<<"pulingiz dollorda turibdi!!! \n";
			break;
			case 's' : cout<<pul*12642<<" so'm \n";
			break;
			case 'r' : cout<<pul*92.24<<" rubl \n";
			break;
			case 'y' : cout<<pul*0.91<<" yevro \n";
			break;
		} break;
			case 'y' : switch(valyuta2){
			case 'y' : cout<<"pulingiz yevroda turibdi!!! \n";
			break;
			case 's' : cout<<pul*13790<<" so'm \n";
			break;
			case 'd' : cout<<pul*1.0922<<" dollor \n";
			break;
			case 'r' : cout<<pul*102<<" rubl \n";
			break;
		} break;
		
	}
	
//	main();
	return 0;
}
