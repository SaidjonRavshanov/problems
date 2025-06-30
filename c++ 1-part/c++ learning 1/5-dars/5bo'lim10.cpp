#include <iostream>
using namespace std;
int main() {
//a ta binoda b ta qavat bor. Xar qavatda c tadan xona bor hamma xonada d tadan stul bor. Bu binolarda jami nechta parta borligini 
//aniqlo'vchi dastur tuzing. (a,b,c,d consoledan qiymat oladi) (1 ta partaga 2 ta stul kerak)
  int a,b,c,d;
  cout<<" binolar soni = ";
  cin>>a;
  cout<<" qavatlar soni = ";
  cin>>b;
  cout<<" xonalar soni = ";
  cin>>c;
  cout<<" stullar soni = ";
  cin>>d;
  cout<<" binolarda jami "<<a*b*c*d/2<<" ta stul bor";
    return 0;
}