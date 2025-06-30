#include <iostream>
using namespace std;
#include <string>
//6-vazifa
//
//Funksiya nomi: nTwice
//Satr va n soni berilgan. Satrni birinchi n ta harfi va oxirgi n ta harfidan iborat yangi satrni qaytaring.
//
//nTwice("Hello", 2) → "Helo"
//nTwice("Chocolate", 3) → "Choate"
//nTwice("Chocolate", 1) → "Ce"
string nTwice(string str ,int n){
return str.substr(0,n)+str.substr(str.length()-n);
}
int main(){
	int n;
	string s;
	cin>>s;
	cin>>n;
	cout<<nTwice(s,n);
}
