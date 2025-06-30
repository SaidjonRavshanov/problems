#include <iostream>
#include <string>
using namespace std;
string orasi(string s, string s1){
	return s.insert(s.length()/2,s1);
}
string qiyin(string s, string s1){
	int index=s.find("qiyin");
	//s.replace(index,5,s1);
	return s.replace(index,5,s1);
}
int sumnumber(string s){
int s1=0;
	for(int i=0;i<s.length();i++){
		if(isdigit(s[i])){
			s1+=s[i]-'0';
		}
		
	} 
	return s1;
	
}

int main(){
//	string s="stul qiyin yasash";
//	string s1="oson";
////	s.insert(3,s,1,3);
	//cout<<orasi(s,s1);
//	cout<<qiyin(s,s1);
//	long long int son;
//	cin>>son;
//	string s=to_string(son);
//	cout<<s.length()<<" xonali ";
//	string s;
//	cin>>s;
//	cout<<sumnumber(s);
	int n;cin>>n;
	for(int i=24;i<n;i++){
		cout<<i+(i-1)/2<<" ";
	}
	main();
}
