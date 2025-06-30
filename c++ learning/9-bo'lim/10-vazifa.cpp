#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;
//10-vazifa
//
//Funksiya nomi: zipZap
//Satr berilgan. Satrda z va p harflarini orasida
//1tagina belgi bo’lsa uni tuhshirib qoldiring, va yangi satrni qaytaring.
//
//zipZap("zipXzap") → "zpXzp"
//zipZap("zopzop") → "zpzp"
//zipZap("zzzopzop") → "zzzpzp"
string zipZap(string s){
	string yangi="";
	for(int i=0;i<s.length()-2;i++){
		if(s[i]=='z' && s[i+2]=='p' && s[i+1]!='z' && s[i+1]!='p'){
			s.erase(remove(s.begin(),s.end(),s[i+1]));
		}
	}
	return s;
}
int main(){
	string s;
	getline(cin,s);
	cout<<zipZap(s)<<endl;
	main();
}
