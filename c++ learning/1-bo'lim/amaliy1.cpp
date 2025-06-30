#include <iostream>
using namespace std;
int main(){
int a;
cin>>a;
int bir=a%10;
int on=a/10%10;
int yuz=a/100%10;
if(a>=100 && a<=999){
	if(yuz>on && on>bir){
		cout<<" kamayuvchi \n";
		
	} else if(bir>on && on>yuz){
		cout<<" o'suvchi \n";
	}
	
} else cout<<"3 xonali son kiriting ";





main();
return 0;}
