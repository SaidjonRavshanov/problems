#include <iostream>
using namespace std;

// Ikkilamchi rekursiv chaqiruv
int f1(int b) {
    if (b >= 10) return b; // To'xtash sharti
    return b + f1(f1(b + 2)); // 2 qo'shildi
}

// Oddiy rekursiv chaqiruv
int f2(int b) {
    if (b >= 10) return b; // To'xtash sharti
    return b + f2(b + 2); // 2 qo'shildi
}

int main() {
    int n = 2;
    
    // f1 funksiyasini chaqirish
    int result1 = f1(n);
    cout << "f1(" << n << ") = " << result1 << endl;

    // f2 funksiyasini chaqirish
    int result2 = f2(n);
    cout << "f2(" << n << ") = " << result2 << endl;

    return 0;
}

