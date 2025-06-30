#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;
string qosh(string s1, string s2, char c) {
	
	for (int i = 0; i < s1.length(); i++) {
		if (s1[i] == c) {
			s1.insert(i,s2);
			i+=s2.length();
		}
	}	
	return s1;
}
int soni(string s, string s1){
	int sanoq=0;
	for(int i=0;i<s.length();i++){//salomnimagapnima
	
		if(s.find(s1)>0){
		sanoq++;
			i+=s1.length()-1;
	}
		
	}
	return sanoq;
}
string probel(string s){
	
		int p1=s.find(' ');
		int p2=s.find(' ',p1+1);
	if(p1==p2){
		return s;
	}
	return s.substr(p1+1,p2-p1-1);	

		
}
int main(){
	string s;
	getline(cin,s);
	cout<<probel(s);
//	string s,s1;
////	char ch;
//	cin>>s>>s1;
////	cin>>ch;
////	cout<<qosh(s,s1,ch);
//	cout<<soni(s,s1);
//	int n=10;
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			if(i==j || i+j==n-1){
//				cout<<"* ";
//			}else cout<<"  ";
//		}cout<<endl;
//		
//	}

}
