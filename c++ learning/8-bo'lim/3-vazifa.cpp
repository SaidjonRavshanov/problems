#include <iostream>
using namespace std;
#include <string>
//3-vazifa
//
//Funksiya nomi: makeOutWord
//2ta a va b satr berilgan. a satr uzunligi 4ga tengligi malum. a satrni 2 va 3-harflari o’rtasiga b satrni joylashtirib natijani qaytaring.
//
//makeOutWord("<<>>", "Yay") → "<<Yay>>"
//makeOutWord("<<>>", "WooHoo") → "<<WooHoo>>"
//makeOutWord("[[]]", "word") → "[[word]]"
string makeOutWord(string str, string str1){
	string s=str.substr(0,2);
	string s1=str.substr(2,2);
	return s.append(str1)+s1;
}
int main(){
	string s,s1;
	cin>>s>>s1;
	cout<<makeOutWord(s,s1);
}
