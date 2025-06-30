#include <iostream>
using namespace std;
#include <string>
//1-vazifa
//
//Funksiya nomi: helloName
//Name nomli satr berilgan, masalan “Aziz”, ushbu korinishda natijani qaytaring(return qiling): “Hello Aziz!”.
//
//helloName("Bob") → "Hello Bob!"
//helloName("Alice") → "Hello Alice!"
//helloName("X") → "Hello X!"
string helloName(string str){
	string s="hello ";
	char b='!';
	return s+str+b;
}
int main(){
	string satr;
	cin>>satr;
	cout<<helloName(satr);
}
