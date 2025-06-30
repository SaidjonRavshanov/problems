#include <iostream>
#include <cctype>
using namespace std;
bool isalphasearch(string str){
	//int counter=0;
	for(int i=0 ; i<str.length(); i++){
		if(!isalpha(str[i])) return false;
		 //break;
	}
	return true;
} int main(){
	string suz;
	getline(cin,suz);
	cout<<boolalpha<<isalphasearch(suz)<<endl;
	
	main();
	return 0;
}
