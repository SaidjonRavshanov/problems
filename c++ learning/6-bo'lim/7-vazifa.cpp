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
//	7-vazifa
//	
//	1. m x n o'lchamli matritsa berilgan. Matritsadagi har bir ustundagi eng katta elementlarni ekranga chiqarib bering.
//	


	for(int i=0;i<m;i++){
			int max=INT_MIN;
			
		for(int j=0;j<n;j++){
			//cout<<arr[j][i]<<" ";
			if(max<arr[j][i]){
				max=arr[j][i];
				
			}
		
		} cout<<i<<" : "<<max;	cout<<endl;
	}
//	2. m x n o'lchamli matritsa va k soni berilgan. Matritsadagi k ustundagi elementlar ko'paytmasini aniqlab bering.
//	
	int k;
	cout<<"k= ";
	cin>>k;
	
	int kupaytma = 1;
	for (int i = 0; i < n; i++) {
		kupaytma *= arr[i][k];
	}cout<<k<<" ustundagi elementlar ko'paytmasi : "<<kupaytma<<endl;



//	3. m x n o'lchamli matritsa va k soni berilgan. Matritsadagi k ustundagi elementlarni ekranga chiqarib bering.
	int k1;
	cout<<"k1= ";
	cin>>k1;
	for(int i=0;i<n;i++){
		cout<<arr[i][k1]<<endl;
		
	}
	
	
	
	
	
	
	main();
	
	
	
	
	
	
	
	
	
	
	
}
