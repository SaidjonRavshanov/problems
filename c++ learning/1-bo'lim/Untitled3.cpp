#include <iostream>
#include <cmath>
#include <string>
using namespace std;
//3-vazifa
//
//1. 1 ta butun son berilgan. 1 dan shu songacha bo'lgan barcha sonlarni ildizini 
//ekranga chiqarib bering. (sqrt)
//
//2. s satr berilgan. Shu satrning oxirgi belgisini ekranga chiqaring.
//
//3. s satr berilgan. Shu satrning dastlabki 2 ta belgisini almashtiring.

int main(){
//	int a ,i=1;
//	cin>>a;
//	while(i<=a){
//		cout<<i<<" ning kv ildizi = "<<sqrt(i)<<" \n";
//		++i;
//	}
//	string s;
//	cin>>s;
//	cout<<s[s.length()-1];
	string d;
	cin>>d;
	if(d.length()>=2){
		char temp=d[0];
		d[0]=d[1];
		d[1]=temp;
		cout<<"almashtirilgan satr "<<d<<"\n";
	} else cout<<" kattaroq satr kiriting !!! \n";

	
	
	return 0;
	
}
