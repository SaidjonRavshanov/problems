#include <iostream>
using namespace std;
int main() {
//1. Berilgan 2 ta sonni qiymatlarini almashtiring va yangi
//qiymatlarni ekranga chiqaruvchi dastur tuzing. (Qo'shimcha o'zgaruvchi ishlatmang).
//
//2. A, B va C sonlar berilgan. A ni qiymati B ga, B ni qiymati C ga va C 
//ni qiymati A ga almashtirilsin. A, B va C ning yangi qiymatlarini ekranga
//chiqaruvchi dastur tuzing.
    int a,b;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<b<<" = b \n";
    cout<<a<<" = a \n";
    //2-misol
    
    int A,B,C;
    cout<<"A = ";
    cin>>A;
    cout<<"B = ";
    cin>>B;
     cout<<"C = ";
    cin>>C;
    A = A + B + C; 
    B = A - (B + C); 
    C = A - (B + C); 
    A = A - (B + C);
    cout<<"A= "<<A<<"\n";
    cout<<"B= "<<B<<"\n";
    cout<<"C= "<<C<<"\n";
   
    return 0;
}