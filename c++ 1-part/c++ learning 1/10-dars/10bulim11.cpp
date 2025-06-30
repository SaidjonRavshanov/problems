#include <iostream>
using namespace std;
int main(){
//11-vazifa
//
//1. Ikkita a va b soni berilgan. Berilgan sonlarni 
//qaysi birini bo'luvchilari ko'pligini topuvchi dastur tuzing.
//
//2. Ikkita a va b sonlari berilgan. a soni b dan kichik a dan b 
//gacha bo'lgan sonlarni yeg'indisi aniqlovchi dastur tuzing. ( a va b  yegindiga kirmasin ).
//int a,b;
//cin>>a>>b;
//int miqdor1=0;
//int miqdor2=0;
//int i=1,j=1;
//while(i<=a){
//	if(a%i==0){
//		miqdor1++;
//	}
//	i++;
//}
//while(j<=b){
//	if(b%j==0){
//		miqdor2==0;
//	}
//	j++;
//}
//if(miqdor1>miqdor2){
//	cout<<a<<" bo'luvchilari "<<b<<" bo'luvchilaridan ko'proq ";
//}else 	cout<<b<<" bo'luvchilari "<<a<<" bo'luvchilaridan ko'proq ";


//2- misol
int a,b;
cin>>a>>b;
int i=a;
int summa=0;
while(i<b-1){
	summa+=i;
	i++;
	cout<<" "<<i<<" \n";
} cout<<"yig'indi = "<<summa;





//main();
	return 0;
}
