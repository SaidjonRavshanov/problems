#include <iostream>
#include <math.h>
using namespace std;
//4-vazifa
//
//1. 1 ta string berilgan. Shu stringdagi barcha harf bo'lmagan belgilarni ekranga chiqaruvchi funksiya tuzib bering.	
//
//2. N soni berigan, N sonini N marotaba chiqaruvchi funksiya tuzing.
void noisalpha(string str){
	cout<<" harf bo'lmagan begilar : \n";
	for(int i=0; i<str.length(); i++){
		if(!isalpha(str[i])) cout<<str[i]<<" "<<endl;
	}
}
void N_ta_N(int n){
	cout<<"n ta n : \n";
	int i=1;
	while(i<=n){
		cout<<n<<" "<<endl;
		i++;
	}
}
int main(){
	cin.ignore();
	string str1;
	getline(cin,str1);
	noisalpha(str1);
	int son;
	cin>>son;
	N_ta_N(son);
}
