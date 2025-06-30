#include <iostream>
using namespace std;
#include <string>
//11-vazifa
//
//Funksiya nomi: withoutX
//Satr berilgan. Agar satrni birinchi yoki oxirgi belgisi ‘x’ bolsa, shu ‘x’larni olib tashlab, satrni qaytaring, aks holda satrni o’zini qaytaring.
//
//withoutX("xHix") → "Hi"
//withoutX("xHi") → "Hi"
//withoutX("Hxix") → "Hxi"
string withoutX(string str){
	
	if(str[0]=='x' && str[str.length()-1]=='x'){
		return str.substr(1,str.length()-2);
	} else if(str[0]=='x'){
	return	str.substr(1);
	} else if(str[str.length()-1]=='x'){
		return str.substr(0,str.length()-1);
	} else return str;
}
int main(){
	string s;
	cin>>s;
	cout<<withoutX(s);
	main();
}
