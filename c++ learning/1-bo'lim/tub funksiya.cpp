#include <iostream>
using namespace std;
bool tublik(int a){
	int sanoq=0;
	for(int i=1; i<=a; i++){
		if(a%i==0){
			sanoq++;
		}
	}
   return ((sanoq==2)? true : false); //yoki return sanoq==2;
} 
int main(){
	int son;
	cin>>son;
	cout<<((tublik(son))?" tub son : \n" : " tub emas : \n" );
//	cout<<boolalpha<<tublik(son);
	main();
}
