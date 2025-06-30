#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cout<<"massiv elementsoni : ";
	cin>>n;
	vector<int> arr(n);
	cout<<"massiv elementlari : ";
	for(int i=0; i<arr.size();i++){
		cin>>arr[i];
	}
	vector <int> newarr;
	for(int i=0;i<arr.size();i++){
		for(int j=0;j<i;j++){
			newarr.push_back(arr[i]+arr[i+1]);
		}
	}cout<<newarr[0];

}
