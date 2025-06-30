#include <iostream>
using namespace std;
int main(){
//8-vazifa
//
//1.  Ishchining oylik maoshi (salary) va o‘rnatilgan tartibdagi 
//eng kam oylik ish haqi (minimum wage) berilgan. Quyidagilar asosida  
//ishchidan olinadigan bir oylik daromad soliqni hisoblovchi dastur tuzilsin.
// Agar salary <= 5 * minimumWage bo‘lsa, 9%;
// Agar salary > 5 * minimumWage va salary <= 10 * minimumWage bo‘lsa, 16%;
// Agar salary > 10 * minimumWage bo‘lsa, 23%.
//
int minw,salary;
cout << "Minimal oylik ish haqini kiriting: ";
    cin >> minw;
    cout << "Ishchining oylik maoshini kiriting: ";
    cin >> salary;
if(salary<=5*minw){
	cout<<"9% foiz soliq bilan jami "<<float(salary*0.09)<<" so'm '\n";
} else if(salary>5*minw && salary<=10*minw ){
	cout<<"16% foiz soliq bilan jami "<<float(salary*0.16)<<" so'm '\n";
} else if(salary>10*minw){
		cout<<"23% foiz soliq bilan jami "<<float(salary*0.23)<<" so'm '\n";
}

//2.  Foydalanuvchi tomonidan ushbu raqamlarga qo‘ng‘iroq amalga oshirilsa quyidagicha yozuv chiqaruvchi dastur tuzilsin.
//101-o‘t o’chirish xizmati.
//102-militsiya xizmati.
//103-tez tibbiy yordam xizmati.
//104-tabiiy gaz xizmati.
//int a;
//cout<<"operator tel raqamlari 101 102 103 104 : tanlang :";
//cin>>a;
//cout<<((a==101)?"o‘t o’chirish xizmati. " :
//	   (a==102)?"militsiya xizmati. " :
//	   	(a==103)?"tez tibbiy yordam xizmati. " :
//	   		(a==104)?"tabiiy gaz xizmati. " : " bunday raqam mavjud emas")<<"\n";
//			   
//	   		
//
//	main();
	
	return 0;
}
