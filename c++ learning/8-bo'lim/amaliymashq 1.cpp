#include <iostream>
#include <string>
using namespace std;
//string helloname(string s){
//	string t="hello ";
//	t.append(s);
//	t.append(" !");
//	return t;
//}
//string make(string a, string b){
//	string s1=a.substr(2);
//	string s2=a.substr(0,2);
//	
//	string text = s2+b+s1;
//	return text;
//}
//string first(string s){
//	s.resize(2);
//	return s;
//}
bool tekshir(string a, string b) {
	// Har ikkala satrni kichik harflarga o'zgartirish
	for(int i = 0; i < a.length(); i++) {
		a[i] = tolower(a[i]);
	}
	for(int i = 0; i < b.length(); i++) {
		b[i] = tolower(b[i]);
	}
	
	// Agar b a ning oxirgi qismiga teng bo'lsa, true qaytaramiz
	if ( a.substr(a.length() - b.length()) == b) {
		return true;
	}
	return false;
}
bool masala7(string s){
	string s1="";
	string s2="";
	for(int i=0;i<s.length();i++){
		if(s[i]=='x' && s[i+1]=='y' && s[i+2]=='z'){
			s1=s.substr(0,i);
			s2=s.substr(i+3);
		}
		
	}
	int a= s1.length();
	int b= s2.length();
	return (a==b || a+1==b || b+1==a);
	
}
int main(){
//	string name;
//	cin>>name;
//	cout<<helloname(name)<<endl;
//	string q,w;
//	cin>>q>>w;
//	cout<<make(q,w)<<endl;
//	cout<<first(name);
	string a,b;
	cin>>a>>b;
	cout<<boolalpha<<tekshir(a,b);
//	cout<<boolalpha<<masala7("xyz")<<endl;
//	cout<<boolalpha<<masala7("axyzaa")<<endl;
//	cout<<boolalpha<<masala7("aaxyza")<<endl;
//	cout<<boolalpha<<masala7("xyza")<<endl;
//	cout<<boolalpha<<masala7("aaaxyza")<<endl;
//	cout<<boolalpha<<masala7("axyzaaa")<<endl;
//	cout<<boolalpha<<masala7("axyz")<<endl;
//	cout<<boolalpha<<masala7("xyzaaa")<<endl;
//	cout<<boolalpha<<masala7("xyzaaa")<<endl;
	
	
	//main();
	return 0;
}
