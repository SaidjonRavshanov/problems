#include <iostream>
using namespace std;
//7-vazifa
//
//1. c++ dasturlash tilidagi isupper()  vazifasini bajaruvchi funksiya yarating.
//2. c++ dasturlash tilidagi toUpper() vazifasini bajaruvchi funksiya yarating.
bool isupperv(char s){
	if(65<=s && s<=90){
		return true;
	} else 
		return false;
}
char toupperv(char a){
	if(65<=a && a<=90){
		return a;
	} else 
		return a=char(int(a)-32);
}
int main(){
	cout<<boolalpha<<isupperv('o')<<endl;
	cout<<boolalpha<<isupperv('1')<<endl;
	cout<<boolalpha<<isupperv('K')<<endl;
	cout<<toupperv('o')<<endl;
	cout<<toupperv('S')<<endl;
	cout<<toupperv('q')<<endl;
}
