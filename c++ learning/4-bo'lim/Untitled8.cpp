#include <iostream>
using namespace std;
//8-vazifa
//
//1. c++ dasturlash tilidagi isdigit() vazifasini bajaruvchi funksiya yarating.
//2. c++ dasturlash tilidagi islower() vazifasini bajaruvchi funksiya yarating.
bool isdigit(char s){
	if(48<=s && s<=57){
		return true;
	} else 
		return false;
}
bool islower(char s1){
	if(97<=s1 && s1<=122){
		return true;
	} else 
		return false;
}
int main(){
	cout<<boolalpha<<isdigit('o')<<endl;
	cout<<boolalpha<<isdigit('1')<<endl;
	cout<<boolalpha<<isdigit('K')<<endl;
	cout<<boolalpha<<islower('o')<<endl;
	cout<<boolalpha<<islower('1')<<endl;
	cout<<boolalpha<<islower('K')<<endl;

}
