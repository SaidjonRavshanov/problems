#include <iostream>
using namespace std;
#include <vector>
//5-vazifa
//
//Funksiya nomi : only14
//int tipida massiv berilgan. Agar massivdagi har bitta element 1 yoki 4 bolsa true qaytaring.
//
//only14([1, 4, 1, 4]) → true
//only14([1, 4, 2, 4]) → false
//only14([1, 1]) → true
bool only14(vector<int> vec){
	
	for(int i=0;i<vec.size();i++){
		if(vec[i]!=1 && vec[i]!=4 )
		{
			return false;
		}
		
	} 
	return true;
}int main(){
	vector<int> v={1,4,1,4,1};
	vector<int> v1={2,2,4,3};
	cout<<boolalpha<<only14(v)<<endl;
	cout<<boolalpha<<only14(v1)<<endl;
}
