#include <iostream>
using namespace std;
#include <vector>
//
//3-vazifa
//
//Funksiya nomi : rotateLeft3
//int tipida uzunligi 3 bolgan massiv berilgan. Massivni birinchi elementini olib oxiriga qoying va natijani qaytaring.
//
//rotateLeft3([1, 2, 3]) → [2, 3, 1]
//rotateLeft3([5, 11, 9]) → [11, 9, 5]
//rotateLeft3([7, 0, 0]) → [0, 0, 7]
vector<int> rotateLeft3(vector<int> vec){
	vec.push_back(vec[0]);
	vec.erase(vec.begin());
	return vec;
}
void coutvector(vector<int> vec1){
	for(int i=0;i<vec1.size();i++){
		cout<<vec1[i]<<" ";
	}cout<<endl;
}
int main(){
	vector<int> v=rotateLeft3({1,2,3});
	vector<int> v1=rotateLeft3({5,11,9});
	
	coutvector(v);
	coutvector(v1);
}
