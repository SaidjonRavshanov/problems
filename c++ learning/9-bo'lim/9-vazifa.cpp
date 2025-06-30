#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;
//9-vazifa
//
//Funksiya nomi: sameStarChar
//Satr berilgan. Satrda har 1ta uchragan ‘*’ belgisidan 
//1ta oldingi va 1ta keyingi belgilar teng bo’lsa, true qaytaring. 
//Agar ‘*’dan 1ta oldin yoki 1ta keyin belgi bolmasa e’tibor qilmang.
//
//sameStarChar("xy*yzz") → true
//sameStarChar("xy*zzz") → false
//sameStarChar("*xa*az") → true
bool sameStarChar(string s){
	for(int i=0;i<s.length()-2;i++){
		if(s[i+1]=='*' && s[i]==s[i+2])
			return true;
	}
	return false;
}
int main(){
	string s;
	getline(cin,s);
	cout<<boolalpha<<sameStarChar(s)<<endl;
	main();
}
