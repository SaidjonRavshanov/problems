#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;
//7-vazifa
//
//Funksiya nomi: countCode
//Satr berilgan. Satrda “code” so’zi necha marta borligini qaytaring.
//faqat “code” so’zidagi d harfi o’rnida ixtiyoriy harf bo’lishi mumkin. “cope” yoki “cooe”.
//
//countCode("aaacodebbb") → 1
//countCode("codexxcode") → 2
//countCode("cozexxcope") → 2
int countCode(string s){
 int codecount=0;
	for(int i=0;i<s.length()-3;i++){
		string co_e=s.substr(i,2)+s.substr(i+3,1);
		if(co_e=="coe") codecount++;
	}
	return codecount;
}

int main(){
	string s;
	getline(cin,s);
	cout<<countCode(s)<<endl;
	main();
}
