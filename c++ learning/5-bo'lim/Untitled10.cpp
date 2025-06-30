#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int generat(int start , int finish){
	int number=rand()%(finish - start+1)+start;
	return number;
	
}
bool upper(string s){
	for(int i=0;i<s.length();i++){
		if(isupper(s[i])) return true;
	} return false;
}

bool toqjuft(int toq){
	return toq%2!=0;//toq bo'lsa true
}
int main(){
	srand(time(0));
	int n;
	cout<<"massiv elementlari : ";
	cin>>n;
	int arr[n];
	int arr1[n];
	int arr2[n];
	for(int i=0;i<n;i++){
		arr[i]=generat(3,100);
		cout<<arr[i]<<" ";
	} cout<<endl;
		for(int i=0;i<n;i++){
		arr1[i]=generat(3,100);
		cout<<arr1[i]<<" ";
	} cout<<endl;

//	10-vazifa
//
//1. n ta elementdan tashkil topgan 2 ta massiv berilgan.
// Massiveni mos elementlar ko'paytmasidan tashkil topgan yangi massive hosil qiling va ekranga chiqaring.
//
for(int i=0;i<n;i++){
	arr2[i]=arr1[i]*arr[i];
	cout<<arr2[i]<<" ";
}
//2. n ta elementdan tashkil topgan string massiv berilgan.
//'$' bilan boshlanadigan elementlar miqdorini aniqlang.
//
int k;
cout<<"\nstring massiv elementlar soni : ";
cin>>k;
string str[k];
cin.ignore();
for(int i=0;i<k;i++){
	cout<<i<<" ";
	getline(cin,str[i]);
}
int miqdor=0;
for(int i=0;i<k;i++){
	if(str[i][0]=='$') miqdor++;
} cout<<"$ belgi bian boshlanadigan satrlar soni : "<<miqdor<<endl;
//3. n ta elementdan tashkil topgan string massiv berilgan.
// Hamma belgisi katta harf bo'lgan elementlarini ekranga chiqaruvchi dastur tuzing. 

cout<<"\n yana "<<k<<" ta string kiriting : "<<endl;

for(int i=0;i<k;i++){
	
	cout<<i<<" ";
	cin>>str[i];
}	
cout<<"hammasi katta harf ";
for(int i=0;i<n;i++){
	if(upper(str[i])) cout<<str[i]<<" , ";
}	
	
	
	
	main();
}
