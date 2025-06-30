#include <iostream>
using namespace std;
int main() {
//1. Faylning hajmi baytlarda berilgan. Fayl hajmini to’liq kilobaytlarda 
//ifodalovchi programma tuzilsin.
//
//2. Agar internet tezligi 750 kbayt/sekund bo'lsa 1.8 GBayt axborotni 
//necha sekundda uzatish mumkinligini aniqlaydigan dastur tuzing.
    double k;
    cout<<"fayl xajmi nechi bayt = ";
    cin>>k;
   
    cout<<"fayl xajmi kilobaytda = "<<k/1024<<"\n";
    double fast=750, axborotxajimgb=1.8;
    2048
    double axborotxajmikb=axborotxajimgb*1024*1024;
    double sekund=axborotxajmikb/fast;
    
    cout<<"1.8 gbayt axborotni "<<fast<<" kbayt/sekund tezlikda "<<sekund <<" sekundda uzatish mumkin";
    return 0;
}