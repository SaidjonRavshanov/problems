#include <iostream>
using namespace std;
#include <string>
//7-vazifa
//
//Funksiya nomi: middleThree
//Toq uzunlikdagi satr berilgan. Satrni o’rtasidagi 3ta harfdan iborat yangi satrni qaytaring. 
//
//middleThree("Candy") → "and"
//middleThree("and") → "and"
//middleThree("solving") → "lvi"
string middleThree(string str){
	return str.substr(str.length()/2-1,3);
}
int main(){
	string s;
	cin>>s;
	cout<<middleThree(s);
}
