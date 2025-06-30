#include <iostream>
#include <string>
using namespace std;
string getsandwich(string s){
	int indexfront=s.find("bread");
	int indexback=s.rfind("bread");
	if(indexfront==indexback) return "1 ta bread yoki umuman yoq ";
	return s.substr(indexfront+5,indexback-indexfront-5);
}
int main(){
	string str="men coding orgainshni boshladim";
//	int indexfront=str.find("bread");
//	int indexback=str.rfind("bread");
//	cout<<indexfront<<" "<<indexback;
	//getline(cin,str);
	cout<<getsandwich(str);
	
}
