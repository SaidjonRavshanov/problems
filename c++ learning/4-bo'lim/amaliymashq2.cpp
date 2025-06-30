#include <iostream>
using namespace std;
void repeat(int a, int b){
	for(int i=1; i<=b; i++){
		cout<<a<<endl;
	}
}
void repeat(int a){
	for(int i=1; i<=a; i++){
		cout<<a<<endl;
	}
}
int main(){
	repeat(4,5);
	repeat(6);
}
