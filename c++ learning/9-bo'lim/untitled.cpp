#include <iostream>
using namespace std;

int main() {
	int i = 10;
	int sanoq = 0, miqdor = 0;
	
	while (i < 100) {
		if ((i / 10) * (i % 10) > 12) {
			miqdor++;
			sanoq += i;
			cout<<i<<" ";
		}
		i++;
	}
	
	cout << "Sanoq: " << sanoq << endl;
	cout << "Miqdor: " << miqdor << endl;
	
	return 0;
}

