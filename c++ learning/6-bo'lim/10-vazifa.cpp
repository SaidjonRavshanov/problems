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
//	10-vazifa
//	
//	1. m x n o'lchamli matritsa berilgan. Matritsadagi har bir ustundagi eng kichik elementlararini ekranga chiqaring.
//	
	for(int i=0;i<m;i++){
		int min=INT_MAX;
		cout<<i<<" ustun dagi eng kichik element : ";
		for(int j=0;j<n;j++){
			if(min>arr[j][i]){
				min=arr[j][i];
			}
		}cout<<min<<endl;
	}
//	2. m x n o'lchamli matritsa berilgan. Matritsadagi har bir qatordagi eng kichik elementlararini ekranga chiqaring.
//	
	for(int i=0;i<n;i++){
		int min=INT_MAX;
		for(int j=0;j<m;j++){
			if(min>arr[i][j]){
				min=arr[i][j];
			}
		}cout<<i<<" qatordagi eng kishik element : "<<min<<endl;
	}
//	3. m x n o'lchamli matritsa berilgan. Matritsadagi hamma elementi juft bo'lgan qatorlarni miqdorini aniqlang.
	for(int i=0;i<n;i++){
		int miqdor=0;
		for(int j=0;j<m;j++){
			if(arr[i][j]%2==0){
				miqdor++;
			}
		}cout<<i<<" qatordagi juftlar miqdori : "<<miqdor<<endl;
	}
	
	
	
	
	
	
	
	
}
