#include <iostream>
using namespace std;
int main(){
//4-vazifa
//
//1. a va b sonlari berilgan. a kichik b dan. Shu sonlar orasidagi 8 ga karrali sonlarni miqdorini aniqlang.
//
//2. a va b sonlari berilgan. a kichik b dan. b dan a gacha 9 ga yoki 5 ga bo'linadigan sonlarni ekranga chiqaring.
//
//3. 1 dan 100 gacha toq sonlarni yig'indisini aniqlang.
cout<<"1. a va b sonlari berilgan. a kichik b dan. Shu sonlar orasidagi 8 ga karrali sonlarni miqdorini aniqlang. \n";
int a,b;
cin>>a>>b;
int i=a;
int sanoq=0;
while(i<=b){
	if(i%8==0){
		sanoq+=1;
	}
	i++;
}cout<<sanoq<<" ta 8 ga karrali sonlar \n";
cout<<"\n 2. a va b sonlari berilgan. a kichik b dan. b dan a gacha 9 ga yoki 5 ga bo'linadigan sonlarni ekranga chiqaring. \n";
 int l,k;
 cin>>l>>k;
 int j=l;
 while(j<=k){
 	if(j%9==0 || j%5==0){
 		cout<<j<<" ";
	 }
	 j++;
 }
cout<<"\n 3. 1 dan 100 gacha toq sonlarni yig'indisini aniqlang. \n";
	int u=1;
	int summa=0;
	while(u<=100){
		if(u%2==1){
			summa+=u;
		}
		u++;
	} cout<<summa<<" = juft sonlar yigindisi";
	
	
	return 0;
}
