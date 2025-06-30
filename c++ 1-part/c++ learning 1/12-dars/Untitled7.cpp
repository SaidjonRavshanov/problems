//7-vazifa
//
//n butun soni berilgan (n > 0). Agar n soni 3 ning darajasi bo'lsa 
// "3 ning darajasi", aks xolda “3 ning darajasi emas” degan natija chiqaruvchi dastur tuzing. 
//ESLATMA: Qoldiqli bo'lish va bo'lish amallarini ishlatmang
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Sonni kiriting: ";
    cin >> n;

    if (n <= 0) {
        cout << "3 ning darajasi emas" << endl;
        return 0;
    }

    int power = 1; // 3^0 = 1

    while (power < n) {
        power *= 3; // Har safar 3 ga ko'paytirib boramiz
    }

    if (power == n) {
        cout << "3 ning darajasi" << endl;
    } else {
        cout << "3 ning darajasi emas" << endl;
    }
    
main();
    return 0;
}

