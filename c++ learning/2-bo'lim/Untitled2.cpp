#include <iostream>
#include <cctype>
using namespace std;
//2-vazifa
//
//1. 1 ta string berilgan. Shu stringdagi kichik harflar miqdorini aniqlab beruvchi funksiya tuzib bering.
//
//2. 1 ta string berilgan. Shu stringdagi ' '(spacelar) miqdorini aniqlab beruvchi funksiya tuzib bering.
//
//3. 1 ta string berilgan. Shu stringdagi '@'lar miqdorini aniqlab beruvchi funksiya tuzib bering.
int islowercounter(string str1){
	int sanoq1=0;
	for(int i=0; i<str1.length();i++){
		if(islower(str1[i])) sanoq1++;
	}
	return sanoq1;
} 
int spacecounter(string str){
	int sanoq2=0;
	for(int i=0 ; i<str.length(); i++){
		if(str[i]==' ') sanoq2++;
	}
	return sanoq2;
}
int belgicounter(string str2){
	int sanoq3=0;
	for(int i=0 ; i<str2.length(); i++){
		if(str2[i]=='@') sanoq3++;
	}
	return sanoq3;
}
int main(){
	string s2,s3,s4;
	cout<<"kichik harf miqdori uchun : ";
	getline(cin,s2);
	cout<<"space miqdori ucun : ";
	getline(cin,s3);
	cout<<"@ belgi miqdori uchun : ";
	getline(cin,s4);
	cout<<"kichik harf miqdori "<<islowercounter(s2)<<endl;
	cout<<"space miqdori "<<spacecounter(s3)<<endl;
	cout<<"@ miqdori "<<belgicounter(s4)<<endl;
	return 0;
}
