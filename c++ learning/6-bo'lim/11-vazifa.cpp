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
//	11-vazifa
//	
//	1. m x n o'lchamli matritsa berilgan. Matritsadagi hamma elementi toq bo'lgan qatorlarni miqdorini aniqlang.
//	
	int sanoq=0;
	for(int i=0;i<n;i++){
		int miqdor=0;
		for(int j=0;j<m;j++){
			if(arr[i][j]%2==1){
				miqdor++;
			}
		}if(miqdor==n) sanoq++;
	} cout<<"Matritsadagi hamma elementi toq bo'lgan qatorlar "<<sanoq<<endl;
//	2. m x n o'lchamli matritsa berilgan. Matritsadagi hamma elementi juft bo'lgan ustunlarni miqdorini aniqlang.
//	
	sanoq=0;
	for(int i=0;i<m;i++){
		int miqdor=0;
		for(int j=0;j<n;j++){
			if(arr[j][i]%2==0){
				miqdor++;
			}
		}if(miqdor==m) sanoq++;
		 
	}cout<<"Matritsadagi hamma elementi juft bo'lgan ustunlar "<<sanoq<<endl;
//	3. m x n o'lchamli matritsa berilgan. Matritsadagi hamma elementi toq bo'lgan ustunlarni miqdorini aniqlang.
	sanoq=0;
	for(int i=0;i<m;i++){
		int miqdor=0;
		for(int j=0;j<n;j++){
			if(arr[j][i]%2==1){
				miqdor++;
			}
		}if(miqdor==m) sanoq++;
	}cout<<"Matritsadagi hamma elementi toq bo'lgan ustunlar "<<sanoq<<endl;
	
	main();
	
	
	
	
	
}
