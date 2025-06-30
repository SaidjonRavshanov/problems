//2 ta son berilgan n va k. n ni k chi darajasini aniqlang. 
//test case :
// input                output
//n = 2, k = 5        natija = 32
//n = 3, k = 3        natija = 27
//n = 6, k = 2        natija = 36

#include <iostream>
using namespace std;
#include <math.h>

int main(){

cout<<"\n---------------------------------------------------------------------------------------\n";
int a,b;
cout<<"asosni kiriting = ";
cin>>a;
cout<<"darajani kiriting = ";
cin>>b;
int kupaytma=1;
for(int i=1; i<=b ; i++){
	kupaytma*=a;
}cout<<a<<" ning "<<b<<" darajasi = "<<kupaytma;



cout<<"\n---------------------------------------------------------------------------------------\n";
	
	return 0;
}
