#include <iostream>
using namespace std;
//4-vazifa
//
//1. 1 ta string berilgan. Berilgan stringni teskari qilib qaytaruvchi funksiya tuzib bering.
//
//2. 1 ta string berilgan. Berilgan stringni palindrom likga tekshirib beruvchi funksiya tuzib bering.
//
//3. 1 ta string berilgan. Berilgan stringni hamma belgisi raqamlikga tekshirib bering (funksiya tuzib bering).
//input : "3243"   output : true
//input : "s1122"  output : false
string teskari(string str){
	for(int i=0;i<str.length()/2;i++){
		swap(str[i],str[str.length()-i-1]);
	} 
	return str;
}
bool polindrom(string str1){
	for(int i=0;i<str1.length()/2;i++){
	      if(str1[i]!=str1[str1.length()-i-1]) return false;
	           
	} 
	return true;
}
bool raqamlik(string str2){
	for(int i=0; i<str2.length();i++){
		if(!isdigit(str2[i])) return false;
	}
	return true;
}
 int main(){
	string suz;
	getline(cin,suz);
	cout<<teskari(suz)<<endl;
	string pol;
	getline(cin,pol);
	cout<<boolalpha<<((polindrom(pol)? true : false));
	string digit;
	getline(cin,digit);
	cout<<boolalpha<<((raqamlik(digit)? true : false))<<endl;
	main();
}
