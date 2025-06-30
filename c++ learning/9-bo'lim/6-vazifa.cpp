#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;
//6-vazifa
//
//Funksiya nomi: catDog
//Satr berilgan. Shu satrda “cat” va “dog” so’zlari teng miqdorda uchrasa, true qaytaring.
//
//catDog("catdog") → true
//catDog("catcat") → false
//catDog("1cat1cadodog") → true
bool catdog(string s){
	int sanoq=0;
	int sanoq1=0;
	for(int i=0;i<s.length()-2;i++){
	
		if(s.substr(i,3)=="cat"){
			sanoq++;
		}
		if(s.substr(i,3)=="dog"){
			sanoq1++;
		}
	}
	return sanoq==sanoq1;
}

int main(){
string s;
	getline(cin,s);
	cout<<boolalpha<<catdog(s);
	
}
