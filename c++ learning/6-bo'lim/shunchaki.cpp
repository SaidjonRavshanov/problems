#include <iostream>
#include <cmath> // sqrt funksiyasi uchun
using namespace std;

int main() {
	int radiusSquared = 121; // radius kvadrati
	int radius = sqrt(radiusSquared); // radiusni hisoblash
	
	// Matritsa o'lchami (10x10 + 1)
	for (int i = -radius; i <=radius+10; i++) {
		for (int j = -radius+; j <=radius; j++) {
			// Aylana tenglamasi
			if (i*i + j*j <= radiusSquared) {
				cout << " *";
			} else {
				cout << "  ";
			}
		}
		cout << endl;
	}
	return 0;
}

