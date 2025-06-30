#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;


int main(){
	int n,k;// n/k n>k
	cin>>n>>k;
	if(k==0) {
		return 0;
	}
	int butun=0;
	int qoldiq=n;
	for(int i=k;i<=n;i+=k){
		qoldiq-=k;
		butun++;
	}
	cout<<n<<"/"<<k<<"="<<butun<<"("<<qoldiq<<" qoldiq )"<<endl;
	main();
}
