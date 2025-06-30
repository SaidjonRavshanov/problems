#include <iostream>
using namespace std;
//9-vazifa
//
//1. c++ dasturlash tilidagi tolower() vazifasini bajaruvchi funksiya yarating.
//2. c++ dasturlash tilidagi pow() vazifasini bajaruvchi funksiya yarating.
char tolowerv(char a){
	if(97<=a && a<=122){
		return a;
	} else 
		return a=char(int(a)+32);
}
double powv(double son, double son1){
	int kupaytma=1;
	for(int i=1;i<=son1;i++)
	{
		kupaytma*=son;
	}
	return kupaytma;
}
int main(){
		cout<<tolowerv('K')<<endl;
		cout<<powv(2,3);
		
}
