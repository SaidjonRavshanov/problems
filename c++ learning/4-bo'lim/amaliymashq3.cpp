#include <iostream>
using namespace std;
int calculate(int a, int b){
	return a+b;
}
int calculate(int a, int b, int c){
	return a*b*c;
}
int main(){
	cout<<calculate(1,2)<<endl;
	cout<<calculate(1,2,3)<<endl;
}
