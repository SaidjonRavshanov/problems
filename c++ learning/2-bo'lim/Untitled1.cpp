#include <iostream>
#include <cctype>
using namespace std;
//double ikkison(int a , int b){
//	return a+b;
//} int main(){
//	int c,k;
//	cin>>c>>k;
//	cout<<ikkison(c,k);
//}
//int digitcounter(string str){
//	int sanoq=0;
//	for(int i=0; i<str.length();i++){
//		if(isdigit(str[i])) sanoq++;
//	}
//	return sanoq;
//} 
//int main(){
//	string s1;
//	getline(cin,s1);
//	cout<<digitcounter(s1)<<endl;
//	return 0;
//}
int isuppercounter(string str1){
	int sanoq1=0;
	for(int i=0; i<str1.length();i++){
		if(isupper(str1[i])) sanoq1++;
	}
	return sanoq1;
} 
int main(){
	string s2;
	getline(cin,s2);
	cout<<isuppercounter(s2)<<endl;
	return 0;
}
