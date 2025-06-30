#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;
//4-vazifa
//
//C belgisi va S1, S2 satrlari berilgan. 
//S1 satriga shu satrda uchragan har bir C belgisidan keyin S2 satrini qo'shuvchi programma tuzilsin.
int main(){
	string s;
	getline(cin,s);
	string s1;
	getline(cin,s1);
	char c;
	cin>>c;
	string y=string(1,c)+s1;
	for(int i=0;i<s.length();i++){
		if(s[i]==c){
			
			s.replace(i,1,y);	
			//cout<<s<<endl;
			i+=s1.length();
		}
		
	}cout<<s<<endl;
	
}
