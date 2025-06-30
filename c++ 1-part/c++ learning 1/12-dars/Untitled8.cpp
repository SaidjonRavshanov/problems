//8-vazifa
//
//1. Karra jadvalini ekranga chiqaruvchi dastur tuzing. 2 karradan 9 karragacha.
// 
#include <iostream>
using namespace std;
int main(){
//for(int i = 2 ; i<=9 ; i++){
//	for(int j=1; j<=10; j++){
//		cout<<i<<" * "<<j<<" = "<<i*j<<" \n";
//		
//	}
//	cout<<"\n";
//}
//2. a va b butun sonlar berilgan. a va b sonlari orasidagi barcha sonlarni
// ekranga chiqaruvchi programma tuzilsin. Bunda har bir son o’zini qiymaticha
//  chiqarilsin. (input - 2 va 6, output - 3 3 3 4 4 4 4 5 5 5 5 5)
int a,b;
cin>>a>>b;
for(int i=a+1; i<b; i++){
	for(int j=0; j<i; j++){
		cout<<i;
	}
}


main();
return 0;
}

