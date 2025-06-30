#include <iostream>
using namespace std;
int main() {
//int type da son berilgan. Faqat ko'paytirish amali orqali sonni 15 chi darajasini aniqlab
// ekranga chiqaring. (Eslatma: ko'paytish amalini faqat 5 marta ishlatish mumkin) demak 15-1=14 8+6+1
  int x1,x2,x3,x4;
  cin>>x1;//1 daraja
  x2=x1*x1*x1;// 3 daraja
  x3=x2*x2;//6 daraja
  x4=x3*x3*x2;
  cout<<x4;
    return 0;
}