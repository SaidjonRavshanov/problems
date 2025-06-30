#include <iostream>
#include <cctype>
#include <string>
using namespace std;
string teskari(string str){
	int i=0;

	while(i<str.length()/2){
		swap(str[i],str[str.length()-i-1]);
		
		i++;
	//	if(i<str.length()/2) break;
	} 
	return str;
}	
	string teskari2(string str2){
		string y="";
		for(int i=0; i<str2.length(); i++){
			y=str2[i]+y;
		}
		return y;
	}
 int main(){
	string a;
	getline(cin,a);
	cout<<teskari(a)<<"\n";
	cout<<teskari2(a)<<"\n";
	
	main();
	return 0;
}
