#include <iostream>
using namespace std;
int fibonachi(int n){
		 if(n==0) return 0;
	else if(n==1) return 1;
	else return fibonachi(n-1)+fibonachi(n-2);

}int main(){
	int a;
	cin>>a;
	cout<<fibonachi(a);
}
