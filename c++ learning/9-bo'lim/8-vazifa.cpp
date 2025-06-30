#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;
//Funksiya nomi: endOther
//2ta a va b satr berilgan. shu satrlardan biri ikkinchisi bilan tugasa,
//true qaytaring. bunda katta-kichik harflar farqlanmaydi.
//
//endOther("Hiabc", "abc") → true
//endOther("AbC", "HiaBc") → true
//endOther("abc", "abXabc") → true
bool endOther(string s,string s1){
	string bir="";
	for(int i=0;i<s.length();i++){
		bir+=tolower(s[i]);
	}
	string ikki="";
	for(int i=0;i<s1.length();i++){
		ikki+=tolower(s1[i]);
	}
	
	if(	bir.length()>=ikki.length() &&	bir.substr(bir.length()-ikki.length())==ikki ){
	return true;
	}
	
	if(ikki.length()>=bir.length() && ikki.substr(ikki.length()-bir.length())==bir){
	return true;
	}
	
	
	 return false;
}

int main(){
	string s,s1;
	getline(cin,s);
	getline(cin,s1);
	cout<<endOther(s,s1)<<endl;
	main();
}
