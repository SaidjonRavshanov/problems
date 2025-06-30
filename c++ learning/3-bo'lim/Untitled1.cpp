#include <iostream>
#include <math.h>
using namespace std;
//1-vazifa
//
//1. 5 ta son berilgan. katta va kichigini aniqlab beruvchi funksiya tuzib being.
////2. 5 ta son berilgan. shu sonlarni ko'paytmasini va yeg'indisini aniqlab beruvchi funksiya tuzib being.


void maxmin(double s1, double s2, double s3, double s4, double s5){
	double max1=max(s1,max(s2,max(s3,max(s4,s5))));
	double min1=min(s1,min(s2,min(s3,min(s4,s5))));
	cout<<"max va min "<<endl;
	cout<<"max = "<<max1<<endl;
	cout<<"min = "<<min1<<endl;

}
 void argument(int a1,int a2,int a3,int a4,int a5){
	int argument1=a1*a2*a3*a4*a5;
	int argument2=a1+a2+a3+a4+a5;
	cout<<"yigindi va ko'paytma "<<endl;
	cout<<"kupaytma = "<<argument1<<endl;
	cout<<"yigindi = "<<argument2<<endl;
}

int main(){
	double son1,son2,son3,son4,son5;
	cin>>son1>>son2>>son3>>son4>>son5;
	
	maxmin(son1,son2,son3,son4,son5);
	
	int r1,r2,r3,r4,r5;
	cin>>r1>>r2>>r3>>r4>>r5;
	
	argument(r1,r2,r3,r4,r5);
	
	
	//return 0;
}


