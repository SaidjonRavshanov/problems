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
			arr[i][j]=generate(1,10);
			cout<<arr[i][j]<<" ";
			
		}cout<<endl;
		
	}cout<<endl;
//	6-vazifa
//	
//	1. m x n o'lchamli matritsa berilgan. Matritsadagi har bir ustundagi elementlar yig'indisini aniqlab bering.
//	

	for(int i=0;i<m;i++){
		int summa=0;
		for(int j=0;j<n;j++){
			
			summa+=arr[j][i];
			
		}	cout<<i<<" ustun : "<<summa<<" "; cout<<endl;
		
	}cout<<endl;
//	2. m x n o'lchamli matritsa berilgan. Matritsadagi har bir ustundagi toq elementlar miqdorini aniqlab bering.
//	

	for(int i=0;i<m;i++){
		int summa1=0;
		for(int j=0;j<n;j++){
			if(arr[j][i]%2==1)summa1++;
			
		}	cout<<i<<" ustun : miqdor "<<summa1<<" "; cout<<endl;
		
	}cout<<endl;
//	3. m x n o'lchamli matritsa berilgan. Matritsadagi har bir ustundagi toq elementlar yig'indisini aniqlab bering.
	for(int i=0;i<m;i++){
		int summa2=0;
		for(int j=0;j<n;j++){
			if(arr[j][i]%2==1)summa2+=arr[j][i];
			
		}	cout<<i<<" ustun : yig'indisi "<<summa2<<" "; cout<<endl;
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
