#include <iostream>
#include <cctype>
using namespace std;
int main(){
//	string s;
//	cin>>s;
//	char a='*';
//	swap(a,s[1]); 
//	
//	cout<<s<<"\n";
//	1. Berilgan str satridagi barcha kichik harflarni kattag o'tgazing.
//
//2. Berilgan str satridagi barcha 'x' larni 'y' bilan, 'y' larni 'z' bilan almashtiruvchi dastur tuzing.
string str;
getline(cin,str);
for(int i=0;i<str.length();i++){
	if(str[i]==' ') {
	 str[i]="";
	}
} cout<<str<<endl;
 
	
	return 0;
}
