#include <iostream>
using namespace std;
#include <vector>
//1-vazifa
//
//Funksiya nomi : firstLast6
//int turidagi elementlardan iborat massiv berilgan. 
//Massivni birinchi yoki oxirgi elementi 6 bo'lsa, true qaytaruvchi funksiya tuzing.
//
//firstLast6([1, 2, 6]) → true
//firstLast6([6, 1, 2, 3]) → true
//firstLast6([13, 6, 1, 2, 3]) → false
bool firstLast6(vector<int> vec){
	if(vec[0]==6 || vec[vec.size()-1]==6) return true ;
}
int main(){
	vector<int> v={1,2,3,4,5,6}; //true
	vector<int> v2={1,2,3,4,5}; //false
	vector<int> v3={6,2,3,4,5,6}; //true
	cout<<boolalpha<<firstLast6(v)<<endl;
	cout<<boolalpha<<firstLast6(v2)<<endl;
	cout<<boolalpha<<firstLast6(v3)<<endl;
}
