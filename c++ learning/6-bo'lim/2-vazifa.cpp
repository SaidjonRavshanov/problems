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
    // 2-vazifa
    //
    // 1. m x n o'lchamli matritsa berilgan. Matritsadagi oxirgi qatordagi juft elementlarni miqdorini aniqlang.
    //
int sanoq=0;
    cout<<"axirgi qtor juft elementlari : ";
    for (int i=0;i<n;i++) {
         for (int j=0;j<m;j++) {
             if(i==n-1 && arr[i][j]%2==0) {
                 sanoq++;
                 cout<<arr[i][j]<<" ";
             }
         }
    }
    // 2. m x n o'lchamli matritsa berilgan. Matritsadagi birinchi va 3 chi qatorlarini ekranga chiqarib bering.
    //
    cout<<"\n 1 chi va 3 chi qator : \n";
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if(i==0 || i == 2) {
                cout<<arr[i][j]<<" ";
            } else cout<<"  ";
        }cout<<"\n";
    }
    // 3. m x n o'lchamli matritsa berilgan. Matritsadagi eng katta elementni ekranga chiqarib bering.

    cout << "\nMatritsadagi eng katta element:\n";
    int katta = arr[0][0];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] > katta) {
                katta = arr[i][j];
            }
        }
    }

    cout << katta << endl;




main();
    return 0;
}