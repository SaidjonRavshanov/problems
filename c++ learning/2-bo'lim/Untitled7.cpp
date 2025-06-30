//1. Berilgan str satridagi barcha katta harflarni kichikga o'tgazing (funksiya tuzib bering).
//
//2. Berilgan str satridagi barcha kichik harflarni kattag o'tgazing (funksiya tuzib bering).
//
//3. 1 ta string berilgan. Shu stringdagi "ok" lar miqdorini aniqlab beruvchi funksiya tuzib bering.
//input : "ok salom ok"   output : 2
//input : "okokokokokk"   output : 5
#include <iostream>
using namespace std;
string bigtosmall(string str){
	for(int i=0; i<str.length();i++){
		if(isupper(str[i])){
		str[i]=tolower(str[i]);
		}
	}
	return str;
}
string smalltobig(string str1){
	for(int i=0; i<str1.length();i++){
		if(islower(str1[i])){
		str1[i]=toupper(str1[i]);
		}
	}
	return str1;
}
int okmiqdor(string str2){
	int sanoq=0;
	for(int i=0; i<str2.length();i++){
		if(str2[i]=='o' && str2[i+1]=='k'){
			sanoq++;
		}
	}
	return sanoq;
} 
 int main(){
	string suz;
	cout<<"big to samll \n";
	getline(cin,suz);
	cout<<bigtosmall(suz)<<endl;
	string suz1;
	cout<<"samll to big \n";
	getline(cin,suz1);
	cout<<smalltobig(suz1)<<endl;
	string suz2;
	cout<<"oklar miqdori \n";
	getline(cin,suz2);
	cout<<okmiqdor(suz2)<<endl;
}
