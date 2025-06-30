#include <iostream>
#include <math.h>
using namespace std;
//5-vazifa
//
//1 dan boshlab foydalanuvchi tamonidan kiritilgan n sonigacha
// bo‘lgan  sonlarning kublarini yig‘indisini hisoblovchi dastur tuzilsin.
//  Misol uchun:
//  n = 7
//  Natija: S = 1^3 + 2^3 + 3^3 + 4^3+ 5^3+ 6^3+ 7^3
int sumkv(int n){
	if(n==1) return 1;
	return pow(n,3)+sumkv(n-1);
}
int main(){
	int son;
	cin>>son;
	cout<<sumkv(son)<<endl;
}
