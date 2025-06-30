#include <iostream>


using namespace std;

int main() {
    double a;
    
    while (true) { // Dastur doimiy ravishda ishlaydi
        cout << "sqrt(a) uchun a= ";
        cin >> a;

        if (a < 0) {
            cout << "Iltimos, manfiy son kiritmang!" << endl;
            continue; // Manfiy son kiritilsa, siklni qaytadan boshlash
        }

        int pastkv = 0;

        // Kichik kvadrat sonni topish
        for (int i = 1; i < a; i++) {
            if (i * i <= a) {
                pastkv = i * i; // a dan kichik kvadrat son
            }
        }

        int j = 1;
        int sqrt1 = 0;

        // Kvadrat ildizni hisoblash
        while (j <= pastkv) {
            if (pastkv / j == j) { // kvadrat ildizni topish
                sqrt1 = j;
            }
            j++;
        }

        // Newton usuli yordamida kvadrat ildizni hisoblash
        double sqrt2 = sqrt1 + (a - pastkv) / (2.0 * sqrt1 + 1);
        
        cout << a << " ning ildiz ko'rsatkichi = " << sqrt2 << endl;
    }
main();
    return 0; // Dastur muvaffaqiyatli yakunlandi
}

