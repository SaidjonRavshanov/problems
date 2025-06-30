#include <iostream>
using namespace std;
#include <string>
//2-vazifa
//
//Funksiya nomi: makeAbba
//Ikkita a va b satr berilgan. Natijani abba ketma-ketlikda qaytaring. Masalan, “Hi” va “Bye” satrlar bolsa, natija “HiByeByeHi” bolsin.
//
//makeAbba("Hi", "Bye") → "HiByeByeHi"
//makeAbba("Yo", "Alice") → "YoAliceAliceYo"
//makeAbba("What", "Up") → "WhatUpUpWhat"
string makeAbba(string str, string str1){
	return str+str1+str1+str;
}
int main(){
	string s,s1;
	cin>>s>>s1;
	cout<<makeAbba(s,s1);
}
