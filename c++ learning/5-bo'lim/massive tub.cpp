#include <iostream>
#include <ctime>
#include <cstdlib> 
using namespace std;
int getrandomnumber(int a, int b) {
    int number = rand() % (b - a + 1) + a;
    return number;
}
bool tubv(int son){
	int sanoq1=0;
	for(int i=1;i<=son;i++){
		if(son%i==0) sanoq1++;
	}
	return (sanoq1==2);
}
int main(){
	 srand(time(0));
    int n;
    cout << "Massiv elementlar soni: ";
    cin >> n;
    
    int arr[n];

    
    for (int i = 0; i < n; i++) {
        arr[i] = getrandomnumber(10,20);
    	cout << arr[i] << " "; //cin>>arr[i];
    } cout<<"\n";
    int sana=0;
for(int i=0;i<n;i++){
	if(tubv(arr[i])) {
		sana++;
		cout<<arr[i]<<" ";
	}
}
cout<<"\n miqdor "<<sana<<endl;
main();
}
