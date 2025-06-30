#include <iostream>
#include <cctype>
using namespace std;
bool polindrom(string str){
	for(int i=0; i<str.length()/2;i++){
		if(str[i]!=str[str.length()-i-1]) {return false;
		   }
	} return true;
	
} int main(){
	string satr;
	getline(cin,satr);
	if(polindrom(satr)){ 
	cout<<"polindrom so'z \n";
	} else cout<<"polindrom so'z emas \n";
	//cout<<boolalpha<<polindrom(satr);
	
	main();
}
