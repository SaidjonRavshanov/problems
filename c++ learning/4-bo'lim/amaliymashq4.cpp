#include <iostream>
using namespace std;
int fun(int n){
//	if(n==1) return 1;
//	return n+fun(n-1);
     int i=0;
    if(n==0) return 0;
    
    return 1+ fun(n/10);
}
int main(){
     int son;
     cin>>son;
	cout<<fun(son)<<endl;
	main();
}
