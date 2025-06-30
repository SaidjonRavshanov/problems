#include <iostream>
using namespace std;
int main(){
//4-vazifa
//
//1 ta son berilgan [10-99] oraliqda. Shu sonni so'z qilib chiqarib bering.
//10 => o'n
//11 => o'n bir
//...
//99 => to'qson to'qqiz

int n;
cin>>n;
int birlar=n%10;
int onlar=n/10%10;
if(n>=10 && n<=99){

switch(onlar){
	case 1: cout<<"o'n "; break;
	case 2: cout<<"yigirma "; break;
	case 3: cout<<"o'ttiz "; break;
	case 4: cout<<"qirq "; break;
	case 5: cout<<"ellik "; break;
	case 6: cout<<"oltmush "; break;
	case 7: cout<<"yetmush "; break;
	case 8: cout<<"sakson "; break;
	case 9: cout<<"to'qson' "; break;
} cout<<endl;
if(birlar!=0){
	switch(birlar){
	case 1: cout<<"bir "; break;
	case 2: cout<<"ikki "; break;
	case 3: cout<<"uch "; break;
	case 4: cout<<"to'rt' "; break;
	case 5: cout<<"besh "; break;
	case 6: cout<<"olti "; break;
	case 7: cout<<"yetti "; break;
	case 8: cout<<"sakkiz "; break;
	case 9: cout<<"to'qqiz' "; break;
	} cout<<endl;
}
} else 	cout<<" [10-99] oraliqda son kiriting \n";
	

	
	main();
	return 0;
}
