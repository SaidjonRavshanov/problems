#include <iostream>
using namespace std;
 int f(int a, int b){
 	if(a==b) return -b;//(a;b)
 	return f(a+1,b)+a+1;
 }
 int f1(int n){
 	if(n==1) return 1;
 	return n*n+f1(n-1);
 }
 int main(){
 	int s1,s2;
 	cin>>s1>>s2;
 	int summa=f(s1,s2);
 	cout<<"summa = "<<summa<<endl;
 	int n1;
 	cin>>n1;
 	cout<<"1 dan "<<n1<<" gacha sonlar kv yig'indisi : "<<f1(n1)<<"\n";
 	main();
 }
