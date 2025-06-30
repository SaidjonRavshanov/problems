#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
//9-vazifa
//
//1. Berilgan str satridagi kichik harflar va raqamlarni birgalikdagi sonini aniqlo'vchi dastur tuzing.
//
//2. Berilgan str satridagi katta harflar va raqamlarni birgalikdagi sonini aniqlo'vchi dastur tuzing.
//
//3. 6. Berilgan str satridagi katta harflar, kichik harflar, 
//raqamlar va belgilarni sonini alohida aniqlo'vchi dastur tuzing.
string s,d,f;
//cin>>s;
int sanoq=0 ,sanoq1=0;
int s1=0,s2=0,s3=0,s4=0;
//for(int i=0 ; i<=s.length() ; i++ ){
//	if(isalnum(s[i])) sanoq++;
//	
//} cout<<sanoq<<" ta harf va raqam bor ";
//cin>>d;
//for(int i=0 ; i<=d.length() ; i++ ){
//	if(isupper(d[i]) || isdigit(d[i])) sanoq1++;
//	
//} cout<<sanoq1<<" ta katta harf va raqam bor ";
cin>>f;
for(int i=0 ; i<f.length() ; i++ ){
	if(isdigit(f[i])) s1++;//raqam
	if(isupper(f[i])) s2++; //katta harf
	if(islower(f[i])) s3++;//kichik harf
	if(!isalnum(f[i])) s4++;//raqam va harfdan tashqari belgi
} cout<<s1<<" ta  raqam bor ";
cout<<s2<<" ta  katta harf bor ";
cout<<s3<<" ta kichik harf bor ";
cout<<s4<<" ta  belgi bor ";

return 0;}
