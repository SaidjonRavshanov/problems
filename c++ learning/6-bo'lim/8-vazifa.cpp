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
//	8-vazifa
//	
//	1.  m x n o'lchamli matritsa berilgan. Matritsaning 2 ga karrali (0, 2, 4, ... ) qatorlarini chiqaruvchi programma tuzilsin. Shart operatori ishlatilmasin.
//	
	
	for(int i=0;i<n;i++){
		cout<<i<<" qator juft elemntlari : ";
		for(int j=0;j<m;j++){
			if(arr[i][j]%2==0){
			 cout<<arr[i][j]<<" ";	
			}
		}cout<<endl;
	}
//	2.  m x n o'lchamli matritsa berilgan. Matritsaning toq indeksli (1, 3, 5, ...) ustunlarini chiqaruvchi programma tuzilsin. Shart operatori ishlatilmasin.
//	
	for(int i=0;i<m;i++){
		cout<<i<<" ustun toq elemntlari : ";
		for(int j=0;j<n;j++){
			if(arr[j][i]%2==1){
				cout<<arr[j][i]<<" ,";	
			}
		}cout<<endl;
	}
//	3. mxn o'lchamli matritsa va k soni berilgan (0 <= k <n). Matritsaning k-ustuni elementlari yig'indisini va ko'paytmasini chiqaruvchi programma tuzilsin.
	int k;
	cout<<"k= ";
	cin>>k;
	int summa = 0, kopaytma = 1;
	for (int j = 0; j < n; j++) {
		summa += arr[j][k];
		kopaytma *= arr[j][k];
	}cout<<k<<"ustun ko'paytmasi : "<<kopaytma<<" yig'indisi : "<<summa<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
