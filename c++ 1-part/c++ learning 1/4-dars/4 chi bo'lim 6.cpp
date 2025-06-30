#include <iostream>
using namespace std;
int main(){
//1. int type da gb berilgan. Gbni Bit ga o'tkazib ekranga chiqaruvchi dastur tuzing. 
//
//2. int type da gb berilgan. GB ni TB ga o'tkazib ekranga chiqaruvchi dastur tuzing. 
//
//3. int type da gb li fleshka berilgan. Shu fleshkaga 2 gb li kinodan nechta siqishini aniqlab
//beruvchi dastur tuzing. 	


	long long int a;
	double b;
	int c;
	cout<<"gb to bit  gb= ";
	cin>>a;
	cout<<"gb to tb  gb= ";
	cin>>b;
	cout<<"fleshkangiz necha gb lik  gb= ";
	cin>>c;
	cout<<a<<" gb = "<<a*8*1024*1024*1024<<" bit ga teng \n";
	cout<<b<<" gb = "<<b/1024<< " tr ga teng \n";
	cout<<c<<" lik fleshkaga 2 gb lik kinodan "<<c/2<<" ta sig'dirish mumkin";
	return 0;
}