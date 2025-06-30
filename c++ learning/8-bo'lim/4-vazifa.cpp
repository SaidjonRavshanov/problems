//4-vazifa
//
//Funksiya nomi: extraEnd. 
//Uzunligi kamida 2ga teng bolgan satr berilgan. Shu satrni oxirgi 2ta harfini  3 marta yonma-yon qilib natijani qaytaring.
//
//extraEnd("Hello") → "lololo"
//extraEnd("ab") → "ababab"
//extraEnd("Hi") → "HiHiHi"
#include <iostream>
using namespace std;
#include <string>

string extraEnd(string str){
	
	string s1=str.substr(str.length()-2);
	return s1+s1+s1;
}
int main(){
	string s;
	cin>>s;
	cout<<extraEnd(s);
}
