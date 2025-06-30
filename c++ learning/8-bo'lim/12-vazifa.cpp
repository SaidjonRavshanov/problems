#include <iostream>
using namespace std;
#include <string>
//1 ta string berilgan. Shu stringdagi '@' belgilarini o'chirib qaytaruvchi funksiya tuzing.

string notdog(string str){
	string s="";
	for(int i=0;i<str.length();i++){
		if(str[i]!='@'){
			s+=str[i];
		}
	}return s;
}
int main(){
	string s;
	cin>>s;
	cout<<notdog(s);
	main();
}
