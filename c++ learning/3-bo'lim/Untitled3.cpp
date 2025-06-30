#include <iostream>
#include <math.h>
using namespace std;
//3-vazifa
//
//1. 2 ta son berilgan. Shu sonlar orasidagi barcha 6 yoki 5 ga karrali sonlarni ekranga chiqarib beruvchi funksiya tuzib bering.
//
//2. 1 ta string berilgan. Shu stringdagi barcha katta harflarni ekranga chiqaruvchi funksiya tuzib bering.
//
//3. 1 ta string berilgan. Shu stringdagi barcha harflarni ekranga chiqaruvchi funksiya tuzib bering.
void besholti(int a, int b){
	cout<<"5 ga yoki 6 ga karrali sonlar \n";
	for(int i=a+1;i<b;i++){
		if(i%5==0 || i%6==0){
			cout<<i<<" "<<endl;
		}
	}
}
void upper(string str){
	cout<<"katta harflar \n";
	for(int i=0; i<str.length();i++){
		if(isupper(str[i])) cout<<str[i]<<" "<<endl;
	}
}
void alpha(string str1){
	cout<<"harflar \n";
	for(int i=0; i<str1.length(); i++){
		if(isalpha(str1[i])) cout<<str1[i]<<" "<<endl;
	}
}
int main(){
	int a1,b1;
	cin>>a1>>b1;
	besholti(a1,b1);
	cin.ignore();
	string str,str1;
	getline(cin,str);
	upper(str);
	getline(cin,str1);
	alpha(str1);
}
