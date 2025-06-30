#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	cout<<"satr kiriting : ";
	
	getline(cin,str);
	char c;
	cout<<"belgini kiriting : ";
	cin>>c;
	string yangistr;
	for(int i=0;i<str.length();i++){
		yangistr+=str[i];
		
		if(str[i]==c){
			yangistr+=c;
			if(str[i]==c){
				yangistr+=c;
			}
		}
	}cout<<yangistr<<endl;	
	
	
}
