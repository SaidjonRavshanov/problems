#include <iostream>
using namespace std;
int main(){
//	6-vazifa
//
//1. s satr berilgan. Agar shu satrni oxirgi 2 ta belgisi kichik harf bo'lsa PDP aks holda ACADEMY
//
//2. s satr berilgan. Agar shu satrni dastlabki va oxirgi belgilari raqam bo'lmasa PDP aks holda ACADEMY
//
//3. s satr berilgan. Agar shu satrni oxirgi 2 belgisi katta harf bo'lsa PDP aks holda ACADEMY
	string s;
	cin>>s;
	cout<<((islower(s[s.length()-2]) && islower(s[s.length()-1]))? "pdp\n" : "academy\n");
	string s1;
	cin>>s1;
	cout<<((isdigit(s1[0]) && isdigit(s1[s1.length()-1]))? "pdp\n" : "academy\n");
	string s2;
	cin>>s2;
	cout<<((isupper(s2[s2.length()-2]) && isupper(s2[s2.length()-1]))? "pdp\n" : "academy\n");


	
	return 0;
	
}
