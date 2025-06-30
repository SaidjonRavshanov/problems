#include <iostream>
using namespace std;
#include <vector>
//7-vazifa
//Funksiya nomi : either24
//int tipida massiv berilgan. Agar massivda 2 sonidan 1ta keyin 2 soni kelsa yoki 4 sonidan 1ta keyin 4 kelsa,
//hamda shu ikki shart 1 vaqtda bajarmasa, true qaytaring.
//either24([1, 2, 2]) → true
//either24([4, 4, 1]) → true
//either24([4, 4, 1, 2, 2]) → false
bool either24(vector<int> vec){
	bool v22=false;
	bool v44=false;
	for(int i=0;i<vec.size()-1;i++){
		if(vec[i]==2 && vec[i+1]==2 )
		{
			v22=true;
		} if(vec[i]==4 && vec[i+1]==4){
			v44=true;
		}
	} return ((v22 || v44) && !(v22 && v44) );
}
int main(){
	vector<int> v={1, 2, 2};
	vector<int> v1={4, 4, 1};
	vector<int> v2={4, 4, 1, 2, 2};
	cout<<boolalpha<<either24(v)<<endl;
	cout<<boolalpha<<either24(v1)<<endl;
	cout<<boolalpha<<either24(v2)<<endl;
	
}
