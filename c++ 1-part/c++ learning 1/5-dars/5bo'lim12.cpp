#include <iostream>
using namespace std;
int main() {
//X, Y, A va B sonlar berilgan. X kg konfet A so‘m turadi va Y kg shokolad B so‘m turadi. 1 kg shokolad 1 kg konfetdan qancha qimmat
//turishini aniqlovchi dastur tuzilsin. X, Y, A va B o’zgaruvchilari qiymati ekrandan kiritilsin.
  int X,Y,A,B;
  cout<<" KONFET KG =" ;
  cin>>X;
  cout<<" KONFET NARXI =" ;
  cin>>A;
  cout<<" SHOKOLAD KG =" ;
  cin>>Y;
   cout<<" SHOKOLAD NARXI =" ;
  cin>>B;
  cout<<" 1 kg shokolad 1 kg konfetdan "<<B/Y-X/A<<" SO'M qimmat";
    return 0;
}