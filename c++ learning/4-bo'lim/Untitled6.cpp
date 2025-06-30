#include <iostream>
using namespace std;
//6-vazifa
//
//1. c++ dasturlash tilidagi max() vazifasini bajaruvchi funksiya yarating.
//2. c++ dasturlash tilidagi abs() vazifasini bajaruvchi funksiya yarating.
double max1(double s,double s1){
	if(s>s1){
		return s;
	} else 
		return s1;
}
double abs1(double a){
	if(a>0){
		return a;
	} else 
		return -a;
}
int main(){
	cout<<max1(10,8)<<endl;
	cout<<abs1(9)<<endl;
	cout<<abs1(-9)<<endl;
}
