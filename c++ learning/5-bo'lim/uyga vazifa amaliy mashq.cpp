#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib>
int randomv(int s,int f){
	int num=rand()%(f-s+1)+s;
	return num;
}
	int main(){
		srand(time(0));
		int n;
		cout<<"massiv elementlar soni : ";
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			arr[i]=randomv(20,50);
			cout<<arr[i]<<" ";
		}cout<<endl;
	}
