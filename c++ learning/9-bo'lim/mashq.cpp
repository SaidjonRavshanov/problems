#include <iostream>
#include <string>
#include <cctype> // raqamlarni tekshirish uchun

using namespace std;

int main() {
//	string kirish;
//	cout << "Satrni kiriting: ";
//	cin >> kirish;
//	
//	int summa = 0;
//	int joriySon = 0;
//	bool sonTopildi = false;
//	
//	for (char belgi : kirish) {
//		if (isdigit(belgi)) {
//			joriySon = joriySon * 10 + (belgi - '0');
//			sonTopildi = true;
//		} else {
//			if (sonTopildi) {
//				summa += joriySon;
//				joriySon = 0;
//				sonTopildi = false;
//			}
//		}
//	}
//	
//	if (sonTopildi) {
//		summa += joriySon;
//	}
//	
//	cout << "Natija: " << summa << endl;
//	
	int a,b;
	cin>>a>>b;
	for(int i=a; i<=b; i++){
		if(a<2)continue;
		int s=0;
		for(int j=2; j*j<=i; j++){
			if(i%j==0){
				s++;
				break;
			}
		}
		
		if(s==2){
			cout<<i<<" ";
		}
	}
	return 0;
}

