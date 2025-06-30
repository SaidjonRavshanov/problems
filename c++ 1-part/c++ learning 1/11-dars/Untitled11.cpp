
#include <iostream>
using namespace std;


int main(){
//11-vazifa
//
//1. Ikkata a va b soni berilgan. Berilgan sonlarni qaysi 
//birini bo'luvchilari ko'pligini topuvchi dastur tuzing.
//
//2. Ikkta a va b sonlari berilgan. a soni b dan kichik a 
//dan b gacha bo'lgan sonlarni yeg'indisi aniqlovchi dastur tuzing. ( a va b  yegindiga kirmasin ).
cout<<"\n---------------------------------------------------------------------------------------\n";
int a,b;
cin>>a>>b;
int boluvchi=0;
int boluvchi1=0;
for(int i=1 ; i<=a ; i++){
        if(a%i==0){
        	boluvchi++;
		}
		
}
for(int i=1 ; i<=b ; i++){
        if(b%i==0){
        	boluvchi1++;
		}
		
} (boluvchi>boluvchi1)? cout<<a<<" boluvchisi " <<b<<" dan ko'p ":
                        (boluvchi==boluvchi1)? cout<<"b'luvchilar miqdori teng  " : cout<<b<<" boluvchisi " <<a<<" dan ko'p ";
cout<<"\n---------------------------------------------------------------------------------------\n";
int a1,b1;
cin>>a1>>b1;
int sum=0;
for(int i=a1+1; i<b1 ; i++){
	sum+=i;
	cout<<i<<" \n";
	
}cout<<"yigiindi = "<<sum;

cout<<"\n---------------------------------------------------------------------------------------\n";



	
	
	
	
	return 0;
}
