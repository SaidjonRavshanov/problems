#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main{
//8-vazifa
//
//1. Berilgan str satridagi katta harflar sonini aniqlo'vchi dastur tuzing.
//
//2. Berilgan str satridagi kichik harflar sonini aniqlo'vchi dastur tuzing.
//
//3. Berilgan str satridagi raqam ham, harf ham bo'lmagan belgilar sonini aniqlo'vchi dastur tuzing.

 string a;
int i=0;sanoq=0;
cin>>a;
while(true){
	if(isupper(a[i])) sanoq++;
	i++;
	if(i==a.length()) break;
} cout<<sanoq<<" ta kata harf n";






return 0;
}
