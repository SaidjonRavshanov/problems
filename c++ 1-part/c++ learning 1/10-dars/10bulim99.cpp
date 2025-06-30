#include <iostream>
using namespace std;
int main(){
//9-vazifa
//
//1. a soni berilgan. Shu sonni tublikga tekshiring. Agar tub bo'lsa true, aks holda false chiqsin.
//
//2. a va b soni berilgan. Agar 2 lasi ham tub bo'lsa ularni summasini, aks holda ko'paytmasini chiqaring.

cout<<" a soni berilgan. Shu sonni tublikga tekshiring. Agar tub bo'lsa true, aks holda false chiqsin. \n";
int a;
cin>>a;
int i=1;
int miqdor=0;
while(i<=a){
	if(a%i==0){
		miqdor++;
	}

	i++;
	
}cout<<boolalpha<<((miqdor==2)? true : false );
cout<<"\n  a va b soni berilgan. Agar 2 lasi ham tub bo'lsa ularni summasini, aks holda ko'paytmasini chiqaring. \n";
int q,w;
cin>>q>>w;
int j=1;
int miqdor1=0;
while(j<=q){
	if(q%j==0){
	miqdor1++;
	}
	j++;
} 

int u=1;
int miqdor2=0;
while(u<=w){
	if(w%u==0){
	miqdor2++;
	}
	u++;
} 
cout<<((miqdor1==miqdor2)? q+w : q*w );


main();
	return 0;
}
