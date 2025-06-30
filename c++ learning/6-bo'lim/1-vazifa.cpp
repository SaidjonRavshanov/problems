// main.cpp
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
    // 1-vazifa
    //
    // 1. m x n o'lchamli matritsa berilgan. Matritsadagi toq elementlar miqdorini aniqlang.
int sum=0;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if(arr[i][j]%2==1) sum++;
        }
    } cout<<"toq elemenlar miqdori : "<<sum<<endl;
    //
    // 2. m x n o'lchamli matritsa berilgan. Matritsadagi juft elementlar yig'indisini aniqlang.
    //
    sum=0;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if(arr[i][j]%2==0) sum+=arr[i][j];
        }
    }cout<<"juft elementlar yig'indisi : "<<sum<<endl;
    // 3. m x n o'lchamli matritsa berilgan. Matritsadagi hamma elementlar yig'indisini aniqlang
sum=0;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            sum+=arr[i][j];
        }
    }
    cout<<"matritsa elementlari yig'indisi : "<<sum<<endl;
    return 0;
}
