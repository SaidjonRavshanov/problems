#include <iostream>
using namespace std;
int main(){
//5-vazifa
//
//1 ta son berilgan [100-999] oraliqda. Shu sonni so'z qilib chiqarib bering.
//100 => yuz
//101 => bir yuz bir
//...
//999 => to'qqiz yuz to'qson to'qqiz

int n;
cin>>n;
int birlar=n%10;
int onlar=n/10%10;
int yuzlar = n/100%10;
if(n>=100 && n<=999){
	switch(yuzlar){
	case 1: cout<<"bir yuz "; break;
	case 2: cout<<"ikki yuz "; break;
	case 3: cout<<"uch yuz "; break;
	case 4: cout<<"to'rt yuz "; break;
	case 5: cout<<"besh yuz "; break;
	case 6: cout<<"olti yuz "; break;
	case 7: cout<<"yetti yuz "; break;
	case 8: cout<<"sakkiz yuz "; break;
	case 9: cout<<"to'qqiz yuz "; break;
}

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
} 
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
} else 	cout<<" [100-999] oraliqda son kiriting \n";
	

	
	main();
	return 0;
}
