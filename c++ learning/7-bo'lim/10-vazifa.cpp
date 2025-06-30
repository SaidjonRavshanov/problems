#include <iostream>
using namespace std;
#include <vector>
//10-vazifa
//
//Funksiya nomi : linearIn
//2ta int tipida a va b massiv berilgan. b massivdagi barcha son a massivida uchrasa true qaytaring.
//
//linearIn([1, 2, 4, 6], [2, 4]) → true
//linearIn([1, 2, 4, 6], [2, 3, 4]) → false
//linearIn([1, 2, 4, 4, 6], [2, 4]) → true
bool linearIn(vector<int> v, vector<int> v1){

for(int i: v1){
	bool tekshir=false;
	for(int j: v){
		if(i==j){
			tekshir=true;
			break;
		}
	}
	if(!tekshir){
		return false;
	}
}
	return true;
}
int main(){
	vector<int> v1={1, 2, 4, 6};
	vector<int> v2={1, 2, 4, 4, 6};
	vector<int> v3={2, 4};
	vector<int> v4={2, 3, 4};
	cout<<boolalpha<<linearIn(v1,v3)<<endl;
	cout<<boolalpha<<linearIn(v1,v4)<<endl;
	cout<<boolalpha<<linearIn(v2,v3)<<endl;
	
	
}
