#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, width;
    double k, b;

    cout << "Massiv o'lchamini kiriting (n): ";
    cin >> n;
    cout << "Grafik kengligini kiriting: ";
    cin >> width;
    cout << "k va b qiymatlarini kiriting (k b): ";
    cin >> k >> b;

    double x[n], y[n];

    // x qiymatlarini generatsiya qilish
    for (int i = 0; i < n; i++) {
        x[i] = i;
        y[i] = -k * x[i] + b;
    }

    // Grafikni chizish
    for (int i = 0; i < n; i++) {
        int pos = round(y[i]);  // y ni yaxlitlash
        if (pos >= 0 && pos < width) {
            // Bo'sh joylarni chiqarish
            for (int j = 0; j < pos; j++) {
                cout << " ";
            }
            // Nuqta yoki yulduzni chiqarish
            cout << "*" << endl;
        }
    }

    return 0;
}

