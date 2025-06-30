#include <iostream>
using namespace std;

	int juft(int a, int b){
		int soni=0;
		while(a+1<b){
			if(a%2==0){
				soni++;
			}
			a++;
		}
			return soni;
	}

	int main(){
		int l,k;
		cin>>l>>k;
		int j=juft(l,k);
		cout<<j<< " ta juft son bor \n";
		return 0;
		main();
	}
	

