#include <iostream>
using namespace std;
//5-vazifa
//
//1. s satr berilgan. Agar shu satrni dastlabki 2 ta belgisi katta harf bo'lsa PDP aks holda ACADEMY ni chiqaring.
//
//2. s satr berilgan. Agar shu satrni dastlabki 2 ta belgisi raqam bo'lsa PDP aks holda ACADEMY ni chiqaring.
//
//3. s satr berilgan. Agar shu satrni dastlabki va oxirgi belgilari raqam bo'lsa PDP aks holda ACADEMY
int main(){
	string s;
	cin>>s;
	if(isupper(s[0]) && isupper(s[1])){cout<<"pdp\n";
	}else cout<<"academy\n";
	string a;
	cin>>a;
	cout<<((isdigit(a[0]) && isdigit(a[1]))? "pdp\n" : "academy\n");
	string d;
	cin>>d;
	cout<<((isdigit(d[0]) && isdigit(d[d.length()-1]))? "pdp\n" : "academy\n");
	
	
	return 0;
	
}
