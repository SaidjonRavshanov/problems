#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
//8-vazifa
//
//1. Berilgan str satridagi katta harflar sonini aniqlo'vchi dastur tuzing.
//
//2. Berilgan str satridagi kichik harflar sonini aniqlo'vchi dastur tuzing.
//
//3. Berilgan str satridagi raqam ham, harf ham bo'lmagan belgilar sonini aniqlo'vchi dastur tuzing.

string a;
int i=0, sanoq=0;
cin>>a;
while(true){
	if(isupper(a[i])) sanoq++;
	i++;
	if(i==a.length()) break;
} cout<<sanoq<<" ta kata harf n";

string s;
cin>>s;
int i1=0, sanoq1=0;
while(i1!=s.length()){
	if(islower(s[i1])) sanoq1++;
	i1++;
	
} cout<<sanoq1<<" ta kichik harf ";
  string h;
  cin>>h;
  int n=0, sanoq2=0;
  while(n!=h.length()){
  	if(!isalnum(h[n])) sanoq2++;
  	n++;
  } cout<<sanoq2 << " ta harf va raqam qatnashmagan belgi ";




return 0;
}
