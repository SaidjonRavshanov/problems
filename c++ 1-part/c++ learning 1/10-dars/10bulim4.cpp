#include <iostream>
using namespace std;
int main(){
//5-vazifa
//
//1.  Barcha 3 xonali sonlar ichidan raqamlar yig'indisi 20 dan katta sonlarni ekranga chiqaring.
//
//2. Barcha 3 xonali sonlar ichidan palindrom sonlarni ekranga chiqaring. (misol : 858, 484, 151)
cout<<"1.  Barcha 3 xonali sonlar ichidan raqamlar yig'indisi 18 dan katta sonlarni ekranga chiqaring. \n";
int a=100;

int i=a;

while(i<=999){
	if(i/100%10+i/10%10+i%10>20){
		cout<<i<<" ";
	}
	i++;
}
cout<<"\n 2. Barcha 3 xonali sonlar ichidan palindrom sonlarni ekranga chiqaring. (misol : 858, 484, 151) \n";
 int l=100;
 
 int j=l;
 while(j<=999){
 	if((j/100%10)==(j%10)){
 		cout<<j<<" ";
	 }
	 j++;
 }
	
	
	return 0;
}
