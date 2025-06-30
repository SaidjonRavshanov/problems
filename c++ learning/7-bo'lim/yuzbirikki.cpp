#include <iostream>
#include <string>
using namespace std;
int main(){
	int son;//321
	cout<<"son kiriting : ";
	cin>>son;
	string bir[]={"","bir","ikki","uch","to'rt","besh","olti","yetti","sakkiz","to'qqiz"};
	string on[]={"","o'n","yigirma","o'ttiz","qirq","ellik","oltmush","yetmush","sakson","to'qson"};
	string yuz[]={"yuz",};
	int b=son%10;
	int o=son/10%10;
	int y=son/100%10;
	if(son>=100 && son<=999){
		cout<<bir[y]<<" "<<yuz[0]<<" "<<on[o]<<" "<<bir[b]<<endl;
	}else if(son>=10 && son<=99){
		cout<<on[o]<<" "<<bir[b]<<endl;
	}else if(son>=1 && son<=9){
		cout<<bir[b]<<endl;
	}
	
	main();
	
	
	return 0;
}
