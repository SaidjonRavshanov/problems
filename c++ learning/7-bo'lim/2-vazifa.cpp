#include <iostream>
using namespace std;
#include <vector>
//2-vazifa
//
//Funksiya nomi : commonEnd
//2ta int tipida a va b massiv berilgan. Agar ularni birinchi elementlari yoki oxirgi indekslaridagi elementlari teng bolsa, true qaytaring.
//
//commonEnd([1, 2, 3], [7, 3]) → true
//commonEnd([1, 2, 3], [7, 3, 2]) → false
//commonEnd([1, 2, 3], [1, 3]) → true
bool commonEnd(vector <int> a,vector <int> b){
	return (a[0]==b[0] || a[a.size()-1]==b[b.size()-1]);
}
int main(){
	vector<int> v={1,4,5,6};
	vector<int> v2={1,2,3,4,5};
	cout<<boolalpha<<commonEnd(v,v2)<<endl;
	vector<int> v3={4,5,6};
	vector<int> v4={1,2,3,4,5};
	cout<<boolalpha<<commonEnd(v3,v4)<<endl;
}
