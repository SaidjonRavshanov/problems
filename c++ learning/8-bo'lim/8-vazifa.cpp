#include <iostream>
using namespace std;
#include <string>
//8-vazifa
//
//Funksiya nomi: conCat
//2ta a va b satrlar berilgan. a satr davomidan b satrni qoyib natijani qaytaring. Agar a satrni oxirgi belgisi b satrni 1-belgisi bilan bir xil bolsa, bu belgilarni 1tasini hisobga oling.
//
//conCat("abc", "cat") → "abcat"
//conCat("dog", "cat") → "dogcat"
//conCat("abc", "") → "abc"
string conCat(string str,string str1){
	
if(str.back()==str1.front()) return str+str1.substr(1);
else return str+str1;
}
int main(){
	string s,s1;
	cin>>s>>s1;
	cout<<conCat(s,s1);
}
