#include <iostream>
using namespace std;
int main(){
//10-vazifa
//
//1. 1 kg shakar 7000 so'm bo'lsa. 3, 4, 5, 6, 7, ..... 55, 56, 57, 58, 59, 60 kg shakar qancha bo'lishini aniqlang.
//
//2. 23 dan n gacha bo'lgan 3 ga bo'linmaydigan sonlarni ekranga chiqaring va ularni sonini topuvchi dastur tuzing.
//
//cout<<"  1 kg shakar 7000 so'm bo'lsa. 3, 4, 5, 6, 7, ..... 55, 56, 57, 58, 59, 60 kg shakar qancha bo'lishini aniqlang. \n";
//
//int i=3;
//int miqdor=0;
//while(i<=60){
//cout<<i<<"kg shakar "<<i*7000<<" so'm \n";
//
//	i++;
//	
//} 
cout<<"\n  23 dan n gacha bo'lgan 3 ga bo'linmaydigan sonlarni ekranga chiqaring va ularni sonini topuvchi dastur tuzing. \n";
int n;
cin>>n;
int j=23;
int soni=0;
while (j<=n){
	if(j%3!=0){
		soni++;
	}
	j++;
} cout<<" soni = "<<soni<<" ta \n";

//main();
	return 0;
}
