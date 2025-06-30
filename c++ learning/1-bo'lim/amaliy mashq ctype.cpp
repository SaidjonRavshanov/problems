#include <iostream>
using namespace std;
#include <cmath>
int main(){
//	1-vazifa
//
//1. 6 ta son berilgan. Berilgan sonlardan kattasini aniqlang.
//
//2. 6 ta son berilgan. Berilgan sonlardan kichigini aniqlang.
//
//3. 1 ta son berilgan. Shu sonni yaxlidlab bering.
	
	int son1,son2,son3,son4,son5,son6;
	cin>>son1>>son2>>son3>>son4>>son5>>son6;
	cout<<"max = "<<max(son1,max(son2,(max(son3,(max(son4,max(son5,son6)))))))<<" \n";
	cout<<"min = "<<min(son1,min(son2,(min(son3,(min(son4,min(son5,son6)))))))<<" \n";
	double a;
	cout<<"yaxlitlash uchun son kiriting : ";
	cin>>a;
	cout<<"tepaga qarab yaxlitlaydi : "<<ceil(a)<<" ";
	cout<<"pastga qarab : "<<floor(a)<<" ";
	cout<<"matematik jihatdan yaxlitlaydi : "<<round(a)<<" ";
	
	main();
	return 0;
}
