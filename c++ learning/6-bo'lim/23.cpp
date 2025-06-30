#include <iostream>
#include <string>
using namespace std;
int main(){
	cout<<"salom";
	string str;
	cout<<"so'z kiriting : ";
	cin.ignore();
	getline(cin,str);
	int birinchi=0;
 	int ikkinchi=0;
    for(int i=0;i<str.length;i++){
	if(str[i]==" "){
			birinchi=i;
			break;
		}if(birinchi<i && i<i+1){
			ikkinchi=i;
			break;
		}

	}
	string yangi="";
	for(int i=0;i<str.length;i++){
		if(birinchi<i && i<ikkinchi ){
			yangi+=str[i];
		}
	} cout<<yangi;
	
}
