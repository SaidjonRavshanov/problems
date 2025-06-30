#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
//12-vazifa
//
//1. Berilgan str satridagi barcha kichik harflarni kattag o'tgazing.
//
//2. Berilgan str satridagi barcha 'x' larni 'y' bilan, 
//'y' larni 'z' bilan almashtiruvchi dastur tuzing.
// string str;
// cin>>str;
// int i=0;
// while(true){
// 	if(islower(str[i])) str[i]=toupper(str[i]);
// 	i++;
// 	if(i==str.length()) break;
// 	
// } cout<<str;
 cout<<"\n---------------------------------------------------------\n";
 string satr;
 cin>> satr;
 const char a='y', b='z';
 int j=0;
 while(true){	
    if(satr[j]=='y')  satr[j]=b;
 	if(satr[j]=='x')  satr[j]=a;
 	j++;
 	if(j==satr.length()) break;
 }  cout<<satr;




main();
return 0;}
