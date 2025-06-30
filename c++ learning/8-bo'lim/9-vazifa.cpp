#include <iostream>
using namespace std;
#include <string>
//9-vazifa
//
//Funksiya nomi: minCat
//2ta a va b satr berilgan. Katta satrni oxirini kichik satr uzunligicha qoldiring va yakunda ikkita bir xil uzunlikdagi satrlarni qoshib qaytaring. Agar satrlar uzunligi teng bolsa, oddiygina shularni qoshib qaytaring.
//
//minCat("Hello", "Hi") → "loHi"
//minCat("Hello", "java") → "ellojava"
//minCat("java", "Hello") → "javaello"
string conCat(string str,string str1){
	if(str.length()>str1.length()){
		return str.substr(str.length()-str1.length())+str1;
	}else if(str.length()<str1.length()){
		return str+str1.substr(str1.length()-str.length());
	}else return str+str1;
}
int main(){
	string s,s1;
	cin>>s>>s1;
	cout<<conCat(s,s1);
	main();
}
