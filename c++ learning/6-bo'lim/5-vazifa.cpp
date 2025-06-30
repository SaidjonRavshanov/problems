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

	}
//	5-vazifa
//	
//	1. m x n o'lchamli matritsa va k soni berilgan. Matritsadagi k qatordagi juft elementlar miqdorini aniqlab bering.
//	
	int miqdor=0,k;
	cin>>k;
	for(int i=k-1;i==k-1;i++){
		for(int j=0;j<m;j++){
		cout<<arr[i][j]<<" ";
			if(arr[i][j]%2==0){
				miqdor++;
			}
		}cout<<endl<<i+1<<"qatorni juft elementlar miqdori : "<<miqdor<<endl;
	}
	
//	2. m x n o'lchamli matritsa va k soni berilgan. Matritsadagi k qatordagi toq elementlar yig'indisini aniqlab bering.
//	
	 miqdor=0;
	int k1;
	cin>>k1;
	for(int i=k1-1;i==k1-1;i++){
		for(int j=0;j<m;j++){
			cout<<arr[i][j]<<" ";
			if(arr[i][j]%2==1){
				miqdor+=arr[i][j];
			}
		}cout<<endl<<i+1<<"qatorni toq elementlari yig'indisi : "<<miqdor<<endl;
	}
//	3. m x n o'lchamli matritsa berilgan. Matritsadagi oxirgi ustundagi juft elementlarni miqdorini aniqlang.
	 miqdor=0;
	int index=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(j==m-1){
				if(arr[i][j]%2==0){
					miqdor++;
					index=j;
					cout<<arr[i][j]<<" ";
				}else cout<<"* ";
			}else cout<<"* ";
		
		}cout<<endl;
	}cout<<endl<<index+1<<" ustun juft elementlar miqdori : "<<miqdor<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
