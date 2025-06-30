#include <iostream>
using namespace std;
#include <string>
//5-vazifa
//
//Funksiya nomi: theEnd
//Satr va Boolean tipidagi front nomli o’zgaruvchi berilgan. Agar front – true bo’lsa, satrni birinchi harfini, front – false bo’lsa, satrni oxirgi harfini qaytaring.
//
//theEnd("Hello", true) → "H"
//theEnd("Hello", false) → "o"
//theEnd("oh", true) → "o"
string theEnd(string front ,bool front1){
	
	if(front1==true){
		return string(1, front[0]);
	} else return string(1,front[front.length()-1]);
	
}
int main(){
	bool a;
	
	string s;
	cin>>s;
	cin>>boolalpha>>a;
	cout<<theEnd(s,a);
}
