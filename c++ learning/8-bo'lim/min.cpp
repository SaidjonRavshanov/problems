#include <iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int daraja=1;
	int i=1;
	while(i<=b){
		daraja*=a;
		i++;
	}
	cout<<daraja;
	
	
}

