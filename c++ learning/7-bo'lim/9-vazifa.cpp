#include <iostream>
using namespace std;
#include <vector>
//9-vazifa
//
//Funksiya nomi : canBalance
//int tipida massiv berilgan. Agar massivni 2 qismga bo’lishni  iloji bolsa, 
//va 1-qismdagi hamda 2-qismdagi elementlar yigindisi teng bolsa, true qaytaring.
//
//canBalance([1, 1, 1, 2, 1]) → true
//canBalance([2, 1, 1, 2, 1]) → false
//canBalance([10, 10]) → true
//canBalance([10, 0, 1, -1, 10]) → true
bool canBalance(vector<int> vec){
	int summa=0;
	int summa1=0;
	for(int i=0;i<vec.size();i++){
		summa+=vec[i];
	}
	for(int i=0;i<vec.size()/2+1;i++){
		summa1+=vec[i];
		if( (summa1==summa-summa1)){
			return true;
		}
	}
	return false;
} int main(){
		vector<int> v={1, 1, 1, 2, 1};
		vector<int> v1={2, 1, 1, 2, 1};
		vector<int> v2={10, 10};
		vector<int> v3={10, 0, 1, -1, 10};
	cout<<boolalpha<<canBalance(v)<<endl;
	cout<<boolalpha<<canBalance(v1)<<endl;
	cout<<boolalpha<<canBalance(v2)<<endl;
	cout<<boolalpha<<canBalance(v3)<<endl;
}
