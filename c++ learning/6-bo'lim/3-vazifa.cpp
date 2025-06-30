#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int random(int s,int f) {
    return rand()%(f-s+1)+s;
}
int main() {
    srand(time(0));
    int n;
    int m;
    cout<<"matritsa elementlar soni :";
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            arr[i][j]=random(10,20);
            cout<<arr[i][j]<<" ";
        }cout<<"\n";

    }
//    3-vazifa
//
//1. m x n o'lchamli matritsa berilgan. Matritsadagi eng kichik elementni indexlarini ekranga chiqarib bering.
//
    int indexi=0,indexj=0;
    int min=arr[indexi][indexj];
    for(int i=0;i<n;i++) {
      for(int j=0;j<m;j++) {
        if(arr[i][j]<min) {
          min=arr[i][j];
          indexi=i;
          indexj=j;
        }
      }
    }cout<<"["<<indexi<<":"<<indexj<<"]"<<min<<"\n";
//2. m x n o'lchamli matritsa berilgan. Matritsadagi har bir qatordagi elementlar yig'indisini aniqlab bering.
//
    
    for(int i=0;i<n;i++) {
		int summa=0;
        for(int j=0;j<m;j++) {
            summa+=arr[i][j];
        
		}cout<<i<<" qatordai elementlar yig'indisi "<<summa<<endl;
    }
//3. m x n o'lchamli matritsa berilgan. Matritsadagi har bir qatordagi toq elementlar miqdorini aniqlab bering.

    for(int i=0;i<n;i++) {
		int sanoq=0;
        for(int j=0;j<m;j++) {
            if(arr[i][j]%2==1) {
                sanoq++;
            }
        }cout<<i<<" qatordagi toq elementlar "<<sanoq<<" ta "<<endl;
    }




main();


    return 0;
    }
