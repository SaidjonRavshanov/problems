#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
//11-vazifa
//
//1. Str satr berilgan. Shu satrdagi harflarni shu satrdagi oxirgi belgi bilan almashtiruvchi dastur tuzing.
//
//2. Berilgan str satridagi dastlabki 5 ta raqamni ekranga chiqaring.
//
//3. Berilgan str satridagi barcha katta harflarni kichikga o'tgazing.
//string s;
//cin>>s;
//int i=0;
//char a=s[s.length()-1];
//while(true){
// if(isalpha(s[i]))	s[i]=a;
//	i++;
//	if(i==s.length()) break;
//} cout<<s;
//cout<<"\n------------------------------------------\n";
//string str;//21n21kn43 -> 212143
//cin>>str;
//int j=0, sanoq=0;
//while(true){
//	if(isdigit(str[j])) {
//		sanoq++;
//		 cout<<str[j];
//	}
//	
//	j++;
//	if(sanoq==5) break;
//
//}  //cout<<str;
cout<<"\n------------------------------------------------\n";
 string str1;
 cin>>str1;
 int k=0;
 while(true){
 	if(isupper(str1[k])) str1[k]=tolower(str1[k]);
 	    	
	    k++;
	 	if(k==str1.length()) break;
 } 
 cout<<str1;
 


main();

return 0;}
