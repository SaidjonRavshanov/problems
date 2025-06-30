#include <iostream>
using namespace std;
int main(){
//	1. int type da 1 ta 4 xonali son berilgan. Shu sonni birlar va o'nlar xonasidagi raqamlarni o'zaro almashtirib ekranga chiqaring.
//
//2. int type da 1 ta 3 xonali son berilgan. Shu sonni yuzlar va o'nlar xonasidagi raqamlarni o'zaro almashtirib ekranga chiqaring.
	
	int a,b;
	cout<<"4 xonali son kiriting a= ";
	cin>>a;
	cout<<"3 xonali son kiriting b= ";
	cin>>b;
	cout<<" 4 xonali sonning bir lar va o'nlar xonasini almashtirdik natija= "<<a/100*100+a/10%10+a%10*10<<"\n";
	cout <<" 3 xonali sonning yuzlar va o'nlar xonasidagi raqamlari o'zaro almashtirdik natija= "<<b/100*10+b/10%10*100+b%10;
	return 0;
}