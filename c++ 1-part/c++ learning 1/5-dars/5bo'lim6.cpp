#include <iostream>
using namespace std;
int main() {
//1. Anvarning planshetida 720 sahifali elektron kitob bor. Har bir sahifada 50 ta qator bor,
// har bir qatorda o‘rtacha 152 tadan belgi bor. Agar bitta belgi kompyuter xotirasidan
//  1 bayt joy egallasa, elektron kitobning hajmi necha MB bo‘ladi?
//
//2.Akmal klaviaturada daqiqasiga N ta belgi yoza oladi. 5 ta belgi bitta 
//so‘z deb hisoblansa Akmal 2.5 daqiqada nechta so‘z yoza oladi? N ga qiymat ekrandan kiritilsin.
    int d;
    cout<<"kitob sahifasni kiriting ";
cin>>d;
 
    cout<<"kitob xajmi = "<<d*50*152/1024/1024<<" mb \n";
    
//1---n ta
//2.5---2.5n
//2.5n/5
int n;
cout<<"n ga son kiriting= ";
cin>>n;
cout<<2.5*n/5<<" ta so'z yoza oladi";

    return 0;
}