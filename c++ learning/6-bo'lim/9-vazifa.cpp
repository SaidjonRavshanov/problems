#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int generate(int s,int f){
	return rand()%(f-s+1)+s;
}
int main(){
	srand(time(0));
	int n;
	int m;
	cout<<"maritsa o'chami : ";
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			arr[i][j]=generate(10,99);
			cout<<arr[i][j]<<" ";
			
		}cout<<endl;
		
	}cout<<endl;
//	9-vazifa
//	
//	1. m x n o'lchamli matritsa va k soni berilgan. Matritsadagi k ustundagi 
//	elementlarni 2 barobarga oshirib ekranga massive chiqarib bering.
//	
	int k;
	cin>>k;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(j==k){
				cout<<"|"<<arr[i][j]*2<<"| ";
				
			}else cout<<arr[i][j]<<"  ";
		}cout<<endl;
	}
//	2. m x n o'lchamli matritsa va k soni berilgan. Matritsadagi k qatordagi 
//	elementlarni 3 barobarga oshirib ekranga massive chiqarib bering.
//	
	int k1;
	cin>>k1;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i==k1){
				cout<<"|"<<arr[i][j]*3<<"| ";
				
			}else cout<<arr[i][j]<<"  ";
		}cout<<endl;
	}
//	3. m x n o'lchamli matritsa va k soni berilgan. Matritsadagi k ustundagi 
//	elementlarni 20 ga oshirib ekranga massive chiqarib bering.
	int k2;
	cin>>k2;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(j==k2){
				cout<<"|"<<arr[i][j]+20<<"|";
				
			}else cout<<arr[i][j]<<"  ";
		}cout<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
