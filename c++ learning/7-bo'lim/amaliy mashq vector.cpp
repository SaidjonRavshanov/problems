#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;
bool first6(vector<int> vec)
{
	if( vec[0]==6 || vec[vec.size()-1]==6){
		return true;
	}return false;
}
bool teng(vector<int> s, vector<int> f)
{
	if(s[0]==f[0] || s[s.size()-1]==f[f.size()-1])
		return true;
}
vector<int> rotate(vector<int> veca){
	veca.push_back(veca[0]);
	veca.erase(veca.begin(),veca.begin()+1);
	return veca;
}
vector<int> urta(vector<int> a, vector<int> b){
	
	vector<int> vec={3,3};
	return vec;
	
}
int main(){
	vector<int> v1={1,2,3,4,5};
	vector<int> v2={6,23,421,3};
	vector<int> v3={3,4,6,7,6};
	cout<<boolalpha<<first6(v1)<<endl;
	cout<<boolalpha<<first6(v2)<<endl;
	cout<<boolalpha<<first6(v3)<<endl;
	vector<int> v4={1,2,3};
	vector<int> n=rotate(v4);
	for(int i=0;i<v4.size();i++){
		cout<<n[i]<<" ";
	}cout<<endl;
	vector<int> vec5={2,3,4};
	vector<int> vec6={2,3,3};
	vector<int> vec7=urta(vec5,vec6);
	
			cout<<vec7[0]<<" "<<vec7[1];
					
	
//	cout<<n[0]<<" "<<n[1]<<" "<<n[2]<<" ";
	
	//cout<<boolalpha<<teng(v4,v2)<<endl;
	//cout<<rotate(v4)<<endl;
	//cout<<resize(v4);
	
	
	
	return 0;
	
}	
	
	
	
	
	
	
	
	
	


