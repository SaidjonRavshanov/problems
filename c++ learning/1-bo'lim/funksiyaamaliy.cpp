#include <iostream>
using namespace std;
int xona(int a){
	int sanoq=0;
	while(true){
		sanoq++;
		a/=10;
		if(a==0)break;
		
	}
	return sanoq;
} 
int main(){
	int s;
	cin>>s;
	cout<<xona(s)<<" xonali son ";
	return 0;
	
}
