#include <iostream>
using namespace std;
#include <vector>
//6-vazifa
//
//Funksiya nomi : isEverywhere
//int tipida massiv va n soni berilgan. Agar massivdagi barcha qo’shni-qo’shni juft elementlardan 1tasi n soniga teng bolsa, true qaytaring.
//
//isEverywhere([1, 2, 1, 3], 1) → true
//isEverywhere([1, 2, 1, 3], 2) → false
//isEverywhere([1, 2, 1, 3, 4], 1) → false
bool isEverywhere(vector<int> vec,int n){
	for(int i=0;i<vec.size();i++){
		if(i%2==0 && vec[i]!=n){
			return false;
		}
	}
	return true;
}int main(){
	int n;
	cin>>n;
	vector<int> v={1, 2, 1, 3};
	vector<int> v1={1, 2, 1, 3};
	vector<int> v2={1, 2, 1, 3, 4};
	cout<<boolalpha<<isEverywhere(v,n)<<endl;
	cout<<boolalpha<<isEverywhere(v1,n)<<endl;
	cout<<boolalpha<<isEverywhere(v2,n)<<endl;
}
