#include <iostream>
using namespace std;
int main(){
//6-vazifa
//
//1.  Aziz mashinada xarakatlanayotgan paytda bilmasdan qizil chiroqdan o‘tib ketdi.
// Agar u jarimani 3 kun ichida to‘lasa 10% arzon to‘lov amalga oshiradi. Agar u 15 kundan
//  ortiq kun ichida jarimani o‘tkazib yuborsa 10% ortiq to‘lov qiladi. 
//  (Foydalanuvchi tomonidan jarima miqdori va kun kiritilsin).  
//
//int j,k;
//cout<<"jarima va kunni kiriting \n";
//cin>>j>>k;
//if(k<=3){
//	cout<<"to'lash kerak bo'ladigan jarima 10% skitka jami "<<float(j*0.9)<<"so'm '\n";
//}else if(k>15){
//	cout<<"15 kundan o'tib ketgan 10% ortiq jami  "<<float(j*1.1)<<"so'm '\n";
//} 
//2.  Issiqxona xarorati ichkaridagi o‘simliklar yaxshi rivojlanishi 
//uchun 25^0 bo‘lishi lozim. Agar issiqxona xarorati 25^0 dan oshib ketsa “oynalar ochilsin”
// aks holda 25^0dan tushib ketsa “oynalar yopilsin” degan yozuv chiqaruvchi dastur tuzilsin.
//Misol uchun: n = 21  Natija: oynalar yopilsin
int n;
cin>>n;
cout<<((n>25)? "oynalar ochilsin" :
        (n<25)?"oynalar yopilsin" :
		"harorat meyorida")<<"\n";

	main();
	
	return 0;
}
