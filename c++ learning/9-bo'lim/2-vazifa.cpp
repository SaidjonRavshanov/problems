#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;
//2-vazifa
//
//C belgisi va S satri berilgan. S satrida uchragan har bir C belgisini 2 marta orttiruvchi programma tuzilsin.
int main(){
string s;
	getline(cin,s);
	char c;
	cin>>c;
	string y=string(2,c);
	for(int i=0;i<s.length();i++){
		if(s[i]==c){
			
			s.replace(i,1,y);	
			//cout<<s<<endl;
			i++;
		}
		
	}cout<<s<<endl;
	
}
