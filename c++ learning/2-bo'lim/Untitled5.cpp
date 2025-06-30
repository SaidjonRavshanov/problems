//5-vazifa
//
//1. 1 ta string berilgan. Berilgan stringni hamma belgisi katta harflikga tekshirib bering (funksiya tuzib bering).
//input : "HELLO"   output : true
//input : "privET"  output : false
//
//2. 1 ta string berilgan. Berilgan stringni hamma belgisi kichik harflikga tekshirib bering (funksiya tuzib bering).
//input : "salom"   output : true
//input : "salom274"  output : false
#include <iostream>
using namespace std;
bool isupperuz(string str2){
	for(int i=0; i<str2.length();i++){
		if(!isupper(str2[i])) return false;
	}
	return true;
}
bool isloweruz(string str3){
	for(int i=0; i<str3.length();i++){
		if(!islower(str3[i])) return false;
	}
	return true;
}
int main(){
	string katta;
	cout<<"kattalikka tekshirish \n";
	getline(cin,katta);
	cout<<boolalpha<<((isupperuz(katta)? true : false))<<endl;
	string kichik;
	cout<<"kichiklikka tekshirish \n";
	getline(cin,kichik);
	cout<<boolalpha<<((isloweruz(kichik)? true : false))<<endl;
	main();
}
