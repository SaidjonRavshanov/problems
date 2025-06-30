#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
//10-vazifa
//
//1. Berilgan str satridagi barcha raqamlarni '9' bilan almashtiruvchi dastur tuzing.
//
//2. Berilgan str satridagi barcha kichik harflarni '*' bilan almashtiruvchi dastur tuzing.
//
//3. Str satr berilgan. Shu satrdagi raqam ham,
// harf ham bo'lmagan belgilarni shu satrdagi birinchi belgi bilan almashtiruvchi dastur  tuzing.
string s;
cin>>s;
char a='9';
int i=0;
while(true){
	if(isdigit(s[i])) s[i]=a;
	i++;
	if(s.length()==i) break;
} cout<<s<<"\n";
string s1;
cin>>s1;
char a1='*';
int i1=0;
while(true){
	if(islower(s1[i1])) s1[i1]=a1;
	i1++;
	if(s1.length()==i1) break;
} cout<<s1<<"\n";

string s2;
cin>>s2;
const char a2=s2[0];
int i2=0;
while(true){
	if(!isalnum(s2[i2])) s2[i2]=a2;
	i2++;
	if(s2.length()==i2) break;
} cout<<s2<<"\n";






return 0;}
