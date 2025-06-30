#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	switch(n){
		case 1: 
		case 2: 
		case 12:
			cout<<"qish \n"; break;
		case 3: 
		case 4: 
		case 5:
			cout<<"bahor \n"; break;
		case 6: 
		case 7: 
		case 8:
			cout<<"yoz \n"; break;
		case 9: 
		case 10: 
		case 11:
			cout<<"kuz \n"; break;
		

		default:
		cout<<" bunday oy yo'q \n";
		break;
	}
	
	main();
	return 0;
}
