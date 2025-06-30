#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;
string masala(string s1, string s2, int n1, int n2){
	return s1.substr(0,n1)+s2.substr(s2.length()-n2);
}
int main(){
	string s1,s2;

	string yangi;
	cin>>s1>>s2;
	int n1,n2;
	cin>>n1>>n2;
	cout<<masala(s1,s2,n1,n2)<<endl;
	main();
	
}
