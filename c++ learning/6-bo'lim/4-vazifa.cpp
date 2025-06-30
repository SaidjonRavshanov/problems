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
//	4-vazifa
//	
//	1. m x n o'lchamli matritsa berilgan. Matritsadagi har bir qatordagi toq elementlar yig'indisini aniqlab bering.
//	
	int summa=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr[i][j]%2==1){
				summa+=arr[i][j];
			}
			
		}cout<<endl;
	}cout<<"har bir qatordagi toq elementlar yog'indisi : "<<summa<<endl;
//	2. m x n o'lchamli matritsa berilgan. Matritsadagi har bir qatordagi eng katta elementlarni ekranga chiqarib bering.
//	
	
	for(int i=0;i<n;i++){
		int max1=arr[0][0];
		for(int j=0;j<m;j++){
			if(max1<arr[i][j]){
				max1=arr[i][j];
			}
			
		}cout<<i<<" qatordagi eng katta elemet "<<max1; cout<<endl;
	}
//	3. m x n o'lchamli matritsa va k soni berilgan. Matritsadagi k qatordagi elementlar ko'paytmasini aniqlab bering
	int k;
	cout<<"qatorni kiriting : ";
	cin>>k;
	int kupaytir=1;
	for(int i=0;i<n;i++){
		
		for(int j=0;j<m;j++){
			if(i==k-1) kupaytir*=arr[i][j];
			
		} 
	}cout<<k<<" qatordagi elementlar kopaytmasi : "<<kupaytir;
	
	
	
	
	
	
	
	
	
	
	
}

