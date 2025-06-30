#include <iostream>
using namespace std;
//4-vazifa
//
//1. s satr berilgan. Shu satrning oxirgi 2 ta belgisini almashtiring.
//
//2. s satr berilgan. Agar shu satrni dastlabki belgisi harf bo'lsa PDP aks holda ACADEMY ni chiqaring.
//
//3. s satr berilgan. Agar shu satrni dastlabki belgisi raqam bo'lsa PDP aks holda ACADEMY ni chiqaring.
int main(){
	string a;
	cin>>a;
	if(a.length()>=2){
	
		char temp=a[a.length()-1];
		a[a.length()-1]=a[a.length()-2];
		a[a.length()-2]=temp;
		cout<<"almashtirilgan satr "<<a<<"\n";
		
	} else cout<<"kattaroq satr kiriting\n";
	
	string q;
	cin>>q;
	if(isalpha(q[0])) cout<<"pdp\n";
	else cout<<"academy\n";
	string w;
	cin>>w;
	if(isdigit(w[0])) cout<<"pdp\n";
	else cout<<"academy\n";
	
	return 0;
	
}
