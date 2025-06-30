//6-vazifa
//
//1. Berilgan str satridagi barcha kichik harflarni '*' bilan almashtiruvchi (funksiya tuzib bering).
//
//2. Berilgan str satridagi barcha 'x' larni 'y' bilan, 'y' larni 'z' bilan alishtirib bering (funksiya tuzib bering).
#include <iostream>
using namespace std;
string yulduzcha(string str){
	for(int i=0;i<str.length();i++){
		if(islower(str[i])){
			str[i]='*';
		} 
	}
	return str;
}
string xyzreplace(string str1){
	for(int i=0;i<str1.length();i++){
		if(str1[i]=='x'){
			str1[i]='y';
		} else if(str1[i]=='y'){
			str1[i]='z';
		}
	}
	return str1;
}
int main(){
	string suz;
	cout<<"islower to * \n";
	getline(cin,suz);
	cout<<yulduzcha(suz)<<endl;
	string suz1;
	cout<<"xyz replace \n";
	getline(cin,suz1);
	cout<<xyzreplace(suz1)<<endl;
	main();
	return 0;
}
