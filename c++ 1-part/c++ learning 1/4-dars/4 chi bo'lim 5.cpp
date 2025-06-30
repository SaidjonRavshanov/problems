#include <iostream>
using namespace std;
int main(){
//1. int type da 1 ta 4 xonali son berilgan. Shu sonni minglar va o'nlar xonasidagi raqamlarni o'zaro almashtirib ekranga chiqaring.
//
//2. int type da gb berilgan. GB ni MB ga o'tkazib ekranga chiqaruvchi dastur tuzing. 	
	int a,b;
	cout<<"4 xonali son kiriting a= ";
	cin>>a;
	cout<<"gb to mb \n gb= ";
	cin>>b;
	cout<<" 4 xonali sonning ming lar va o'nlar xonasini almashtirdik natija= "<<a/1000%10*10+a/100%10*100+a/10%10*1000+a%10<<"\n";
	cout <<b<<" gb = "<<b*1024<<" mb ga teng";
	return 0;
}