#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int n=2;
	
	
//	string boshi = s.substr(0,n);
//	string oxiri= s.substr(s.length()-n);
//	cout<<boshi<<" "<<oxiri<<endl;
	if(s.length()%2==0){
	string s1=s.substr(s.length()/2-1,n);
		cout<<s1<<endl;
	} 

//	s.resize(2*s.length(),s[s.length()-1]);
//	cout<<s;
	
	
	
	
	
	return 0;
}
