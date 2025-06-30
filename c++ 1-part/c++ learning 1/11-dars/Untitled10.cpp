//1. 1 kg shakar 4000 so'm bo'lsa. 13, 14, 15, 16, 17, ..... 55, 56, 57, 58, 59, 60 kg shakar qancha bo'lishini aniqlang.
//
//2. 35 dan n gacha bo'lgan 3 ga bo'linmaydigan sonlarni ekranga chiqaring va ularni sonini topuvchi dastur tuzing

#include <iostream>
using namespace std;
int main(){
cout<<"\n---------------------------------------------------------------------------------------\n";

for(int i=13 ; i<=60 ; i++){
      cout<<i*4000<<" ";
} 

cout<<"\n---------------------------------------------------------------------------------------\n";

int n, miq1=0;
cin>>n;
for(int i=35 ; i<=n ; i++){
	if(i%3!=0){
		miq1++;
		cout<<i<<" \n";
	}
}cout<<miq1<<" ta";


cout<<"\n---------------------------------------------------------------------------------------\n";



	
	
	
	
	return 0;
}
