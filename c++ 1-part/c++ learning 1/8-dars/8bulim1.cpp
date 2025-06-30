#include <iostream>
using namespace std;
int main(){
//1. Qiymati [-999; 999] oraliqda yotuvchi butun son berilgan. Son qiymatiga mos ravishda 
//“uch xonali manfiy”, 
//“ikki xonali manfiy”, 
//“bir xonali manfiy”, 
//“nol soni”, 
//“bir xonali musbat son”, 
//“ikki xonali musbat son”,
//“uch xonali musbat son” 
//kabi satrlarni ekranga chiqaruvchi dastur tuzilsin.
//
//int a;
//cin>>a;
//if(a>0 && a<=9){
//	cout<<"bir xonali musbat \n";
//} else if (a>=10 && a<=99){
//	cout<<"ikki xonali musbat \n";
//} else if(a>=100 && a<=999){
//	cout<<"uch xonali musbat \n";
//} else if(a>=-9 && a<0){
//	cout<<"bir xonali manfiy \n";
//} else if (a<=-10 && a>=-99){
//	cout<<"ikki xonali manfiy \n";
//} else if(a<=-100 && a>=-999){
//	cout<<"uch xonali manfiy \n";
//} else if(a==0) {cout<<"nol soni \n";
//}

//2. Qiymati [1; 9999] bo‘lgan x butun soni berilgan. Bu sonning  qiymatiga mos ravishda quyidagi satrlarni chop eting: 
//“to‘rt xonali juft son”, 
//“to‘rt xonali toq son”, 
//“uch xonali juft son”, 
//“uch xonali toq son”, 
//“ikki xonali juft son”, 
//“ikki xonali toq son”, 
//“bir xonali juft son”, 
//“bir xonali toq son”, 
//va … ekranga chiqaruvchi dastur tuzilsin.
int i,j,a=1,b=1;
cin>>i>>j;
int sanoq1=0;
int sanoq2=0;
while(a<=i){
	if(i%a==0){
		sanoq1++;
	}
	a++;
} 
    
while(b<=j){
	if(j%b==0){
		sanoq2++;
	}
	b++;
} 
 cout<<((sanoq1==sanoq2)? i+j : i*j);

	main();
	
	return 0;
}
