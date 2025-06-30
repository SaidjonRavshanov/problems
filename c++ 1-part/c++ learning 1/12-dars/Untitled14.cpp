#include <iostream>
#include <conio.h>
//[1,1][1,2][1,3][1,4][1,5]
//[2,1][2,2][2,3][2,4][2,5]
//[3,1][3,2][3,3][3,4][3,5]
//[4,1][4,2][4,3][4,4][4,5]
//[5,1][5,2][5,3][5,4][5,5]
using namespace std;
int main(){

	double n=5;
	for(int x=1; x<=n; x++){
		getch();
	int start = x * 9 + 6 ; // x=1:  start=15; x=2: start=24 
		for(int y=1;y<=x; y++){
	
			 cout << start + y-1 << " "; // 15 
		}                                // 2
		cout<<endl;
		
	}

	return 0;
}
