#include <iostream>
using namespace std;
int main(){
//7-vazifa
//
//2 ta son berilgan shu sonlar ustida matematik 
//operatorlardan fo'ydalanib kichik kalkulyator qilib bering '+', '-', '*', '/'.

double a,b;
cout<<"a va b ga son bering \n";
cout<<"a= ";
cin>>a;
cout<<"b= ";
cin>>b;
char amal;
cout<<"'+', '-', '*', '/' quyidagi amallardan birini tanlang \n";
cout<<"amal= ";
cin>>amal;
switch(amal){
	case '+': cout<<a<<" + "<<b<<" = "<<a+b<<"\n"; break;
	case '-': cout<<a<<" - "<<b<<" = "<<a-b<<"\n"; break;
	case '*': cout<<a<<" * "<<b<<" = "<<a*b<<"\n"; break;
	case '/': cout<<a<<" / "<<b<<" = "<<a/b<<"\n"; break;
	default :
		cout<<"bunday amal yo'q!!! \n";
		break;
}

	
	main();
	return 0;
}
