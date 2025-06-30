#include <iostream>
using namespace std;
#include <vector>
//4-vazifa
//
//Funksiya nomi : reverse3
//int tipida uzunligi 3 bolgan massiv berilgan. Massivni teskari qilib (aylantirib) qaytaring.
//reverse3([1, 2, 3]) → [3, 2, 1]
//reverse3([5, 11, 9]) → [9, 11, 5]
//reverse3([7, 0, 0]) → [0, 0, 7]
vector<int> reverse3(vector<int> vec){
	for(int i=0;i<vec.size()/2;i++){
		swap(vec[i],vec[vec.size()-1-i]);
	} return vec;
}
void coutvector(vector<int> vec1){
	for(int i=0;i<vec1.size();i++){
		cout<<vec1[i]<<" ";
	}cout<<endl;
}
int main(){
	vector<int> v=reverse3({1,2,4,3,5,6});
	coutvector(v);
	
}
