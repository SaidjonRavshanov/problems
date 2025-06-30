#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;
//11-vazifa
//
//Funksiya nomi: wordEnds
//2ta str va word nomli satrlar berilgan. 
//str da uchraydigan baarcha word larni 1ta oldin 
//va 1ta keyingi belgilarini ketmaket qoyib yangi 
//string hosil qiling va natijani qaytaring. word’dan 
//oldin yoki keyin belgi bolmasa etibor qilmang. 1ta belgi 
//2marta hisobga olingan holatlar ham bolishi mumkin.
//wordEnds("abcXY123XYijk", "XY") → "c13i"
//wordEnds("XY123XY", "XY") → "13"
//wordEnds("XY1XY", "XY") → "11"
string wordEnds(string s, string s1) {
	string yangi = "";
	int wordLength = s1.length();
	for (int i = 0; i <= s.length() - wordLength; ++i) {
		if (s.substr(i, wordLength) == s1) {		
			if (i > 0) {
				yangi += s[i - 1];  
			}
			if (i + wordLength < s.length()) {
				yangi += s[i + wordLength]; 
			}
			i += wordLength - 1;  
		}
	}
	
	return yangi;
}
int main(){
	string s;
	string s1;
	getline(cin,s);
	getline(cin,s1);
	cout<<wordEnds(s,s1)<<endl;
	main();
}
