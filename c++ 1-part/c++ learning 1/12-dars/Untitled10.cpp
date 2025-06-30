#include <iostream>
using namespace std;
int main(){
//	1. n soni berilgan. n asosida quyidagi shaklni chiqaruvchi dastur tuzing :
//test case 
//input : n = 5
//output :
//* * * * * 
//* * * * *
//* * * * *
//* * * * *
//* * * * *
//


int n;
cin>>n;
for(int i=1; i<=n; i++){
	for(int j=1; j<=n; j++){
	 cout<<" * ";
	}
	cout<<"\n";
}
//2. n soni berilgan. n asosida quyidagi shaklni chiqaruvchi dastur tuzing :
//test case 
//input : n = 5
//output :
//*        *
//*        *
//*        *
//*        *
//*        *
	int n1;
	cin>>n1;
for(int i=1; i<=n1; i++){
	cout<<" * ";
	for(int j=1; j<=n1; j++){
		 cout<<" ";
		
	} cout<<" * \n";
}
	
	return 0;
}
