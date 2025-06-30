#include <iostream>
using namespace std;
#include <string>
//10-vazifa
//
//Funksiya nomi: deFront
//Satr berilgan. Satrni boshidagi 2ta belgisini olib tashlang, lekin birinchi belgi ‘a’ bolsa, qoldiring, ikkinchi belgi ‘b’ bolsa, buni ham qoldiring. Natijani qaytaring.
//
//deFront("Hello") → "llo"
//deFront("java") → "va"
//deFront("away") → "aay"
string deFront(string str){
	
if(str[0]=='a' || str[0]=='b'){
	return str.substr(0,1)+str.substr(2);
} else return str.substr(2);
}
int main(){
	string s;
	cin>>s;
	cout<<deFront(s);
	main();
}
