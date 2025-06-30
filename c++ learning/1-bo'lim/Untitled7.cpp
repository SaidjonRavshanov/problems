#include <iostream>
using namespace std;
//7-vazifa
//
//1. s satr berilgan. Agar shu satrni dastlabki belgisi katta harf va oxirgi belgisi kichik harf bo'lsa HARF aks holda HARFEMAS ni ekranga chiqaring
//
//2. Berilgan str satridagi raqamlar sonini aniqlo'vchi dastur tuzing.
//
//3. Berilgan str satridagi harflar sonini aniqlo'vchi dastur tuzing.
int main(){
//	string s;
//	cin>>s;
//	cout<<((isupper(s[0]) && islower(s[s.length()-1]))? "harf\n" : "harf emas\n");

	string s1;
	int i=0,sanoq=0;
	cin>>s1;
    while(i!=s1.length()){
    	if(isdigit(s1[i])){
    		sanoq++;
		} 
		i++;
		//if(i==s1.length()) break;
	}
	cout<<sanoq<<" ta raqam \n";
		string s2;
	int i1=0,sanoq1=0;
	cin>>s2;
    while(i1!=s2.length()){
    	if(isalpha(s2[i1])){
    		sanoq1++;
		} 
		i1++;
		//if(i==s1.length()) break;
	}
	cout<<sanoq1<<" ta harf \n";
	return 0;
	
}
