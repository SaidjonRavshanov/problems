#include <iostream>
#include <math.h>
using namespace std;
//8-vazifa
//
//1. 1 dan 100 gacha sonlar ichidan toq sonlarni ekranga chiqarib beruvchi funksiya tuzib bering.
//
//2. 1 ta butun son berilgan. 1 dan shu songacha barcha butun sonlarni ildizni ekranga chiqaruvchi funksiya tuzib bering.


void toq(int a1=1){
	for(int i=a1; i<=100 ; i+=2){
		cout<<"1 dan 100 gacha toq sonlar : "<<i<<endl;
	}
}
double sqrtfunk(int a) {
    if (a < 0) {
        cout << "Iltimos, manfiy son kiritmang!" << endl;
        return -1; // Manfiy son kiritilsa, -1 qaytariladi
    }

    // Newton usuli yordamida kvadrat ildizni hisoblash
    double x = a;
    double sqrt2;

    // Iteratsiya qilish
    while (true) {
        sqrt2 = (x + a / x) / 2;
        if (fabs(sqrt2 - x) < 1e-6) { // Yaqinlikni tekshirish
            break;
        }
        x = sqrt2;
    }

    return sqrt2;
}
void sqrt1(int b){
	for(int i=1; i<=b; i++){
		cout<<i<<" ning ildizi : "<<sqrtfunk(i)<<endl;
	}
}
int main(){
	toq();
	int son;
	cin>>son;
	sqrt1(son);
	sqrtfunk(son);
}

