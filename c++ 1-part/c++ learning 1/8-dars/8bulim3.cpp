#include <iostream>
using namespace std;
int main(){
//4-vazifa
//
//1.  2 ta a va b sonlar orasida +, -, *, /, % amallarini
//bajara oladigan kalkulyator dasturini yarating.
//
//input: a=8, ammal='+', b=45   output: 53
//input: a=9, ammal='/', b=3    output: 3 
//input: a=9, ammal='%', b=4    output: 1
//
int a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    
   
     
        cout << "Amalni tanlang: +, -, *, /, %" << endl;
        char amal1;
        cin >> amal1;

        if (amal1 == '+') {
            cout << a << " + " << b << " = " << a + b << endl;
        } else if (amal1 == '-') {
            cout << a << " - " << b << " = " << a - b << endl;
        } else if (amal1 == '*') {
            cout << a << " * " << b << " = " << a * b << endl;
        } else if (amal1 == '/') {
            if (b != 0) {
                cout << a << " / " << b << " = " << static_cast<float>(a) / b << endl;
            } else {
                cout << "Nolga bo'lish mumkin emas!" << endl;
            }
        } else if (amal1 == '%') {
            if (b != 0) {
                cout << a << " % " << b << " = " << a % b << endl;
            } else {
                cout << "Nolga bo'lish mumkin emas!" << endl;
            }
        } else {
            cout << "Noto'g'ri amal tanlandi!" << endl;
        }
    


//
//
//2.  Jumlani rostlikka tekshiring: Berilgan uch xonali sonning raqamlari 
//ketma-ket o‘suvchi yoki kamayuvchi bo‘lib joylashgan deb yozuv chiqaruvchi dastur tuzilsin.
//
//Misol uchun: a = 123  yoki  a = 321
//int a;
//cout<<"3 xonali son kiriting a= ";
//cin>>a;
//int bir=a%10;
//int on=a/10%10;
//int yuz=a/100%10;
//if(bir>on && on>yuz){
//	cout<<"o'suvchi \n";
//} else if(yuz>on && on>bir){
//	cout<<"kamayuvchi \n";
//} else cout<<" o'suvchi ham kamayuvchui ham emas \n";

	main();
	
	return 0;
}
