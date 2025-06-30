#include <iostream>
using namespace std;
float Add(float a0, float a1){
	return a0+a1;
}
float Add(float a0, float a1, float a2){
	return a0+a1+a2;
}
string Add(string a0, string a1){
	return a0+a1;
}
int main(){
	cout<<Add(1,2)<<endl;
	cout<<Add(1.2,1,1.7)<<endl;
	cout<<Add("salom ","saidjon")<<endl;
	
}
