#include <iostream>
using namespace std;
#include <vector>
//8-vazifa
//
//Funksiya nomi : matchup
//int tipida teng uzunlikda 2ta a va b massivlar berilgan. 
//a massivni n-inchi indeksidagi element b massivni n-inchi indeksidagi 
//elementdan 1taga yoki 2taga farq qiladiganlarni sonini toping.
//
//matchUp([1, 2, 3], [2, 3, 10]) → 2
//matchUp([1, 2, 3], [2, 3, 5]) → 3
//matchUp([1, 2, 3], [2, 3, 3]) → 2
int matchup(vector<int> v,vector<int> v1){
	int sanoq=0;
	
	for(int i=0;i<v.size();i++){
		int mus=abs(v[i]-v1[i]);
		if(mus==1 || mus==2) sanoq++;
	}
	return sanoq;
}
int main(){
	vector<int> v={1, 2, 3};
	vector<int> v2={2, 3, 10};
	vector<int> v3={2, 3, 5};
	vector<int> v4={2, 3, 3};
	cout<<matchup(v,v2)<<" "<<matchup(v,v3)<<" "<<matchup(v,v4)<<endl;
	
}
