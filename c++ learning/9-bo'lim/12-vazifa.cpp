#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;
//12-vazifa
//
//Funksiya nomi: withoutString
//2ta a va b satrlar berilgan. a satrni ichida barcha b satrlari bolsa, olib tashlang va natijani qaytaring.
//
//withoutString("Hello there", "llo") → "He there"
//withoutString("Hello there", "e") → "Hllo thr"
//withoutString("Hello there", "x") → "Hello there"
//withoutString("abyyyab", "yy") → "abyab"
string withoutString(string s, string s1) {
	size_t pos = 0;
	// Qayta-qayta s1 satrini topib, olib tashlaymiz
	while ((pos = s.find(s1, pos)) != string::npos) {
		s.erase(pos, s1.length());
	}
	return s;

}
int main(){
	string s;
	string s1;
	getline(cin,s);
	getline(cin,s1);
	cout<<withoutString(s,s1)<<endl;
	main();
}

