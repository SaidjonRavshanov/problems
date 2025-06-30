#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
int random(int s,int f){
	return rand()%(f-s+1)+s;
}



int main(){
	srand(time(0));
	//int arr[2][3];
//	int arr1[2][3]={{1,2,3},{4,5,6}};
//	cout<<arr1[2][3];
//	
int m,n;
cout<<"m : ";cin>>m;
cout<<"n : ";cin>>n;
int arr[m][n];
for(int i=0; i<m;i++){
	for(int j=0;j<n;j++){
		arr[i][j]=random(10,50);
		cout<<arr[i][j]<<" ";
		
	}cout<<endl;
}cout<<endl;
//int sanoq=0;
//for(int i=0; i<m;i++){
//	for(int j=0;j<n;j++){
////		if(i==1 || i==3 )
////		{
////			sanoq++;
////			cout<<"___";
////		} else if(j==1 || j==3){
////			cout<<" | ";
////		} else cout<<"   ";
//		if(i==j*2){
//			cout<<" . ";
//		}else cout<<"   ";
//	}cout<<endl;
//}cout<<endl;
//cout<<sanoq<<"= toq on miqdori \n";
//============================================================================
//int minindex=0; int minindex2=0;
//	for(int i=0; i<m-1;i++){
//	for(int j=0;j<n-1;j++){
//		if(arr[minindex][minindex2]>arr[i][j]){
//			minindex=i;
//			minindex2=j;
//			
//		}
//		
//		
//	}
//	
//}
//cout<<minindex<<" "<<minindex2<<" ing kichik element indekslari "<<endl;
//int sanoq1=0;
//	for(int i=0; i<m;i++){
//	for(int j=0;j<n;j++){
//		if(i==m-1){
//			if(arr[i][j]%2==0){
//				sanoq1++;
//				cout<<"j  ";//j->juft
//			} else cout<<"00 ";
//		}else cout<<"00 ";
//		
//		
//	}cout<<endl;
//	
//}cout<<endl; cout<<"axirgi qatorda "<<sanoq1<<" ta juft element bor \n";
	


//	for(int i=0; i<m;i++){
//		int sanoq1=0;
//	for(int j=0;j<n;j++){
//			if(arr[i][j]%2==1)
//				  sanoq1++;		
//	}
//	cout<<i<<" qatorda "<<sanoq1<<" ta toq son bor ";
//	cout<<endl;
//}
//sanoq1<<" toq son midori ";
//======================================
//	
//		for(int i=0;i<m;i++){
//	int max=0;
//	for(int j=0;j<n;j++){
//			if(max<arr[i][j]){
//				max=arr[i][j];
//			} 
//					
//	}
//	cout<<i<<" qator "<<max<<" ";
//	cout<<endl;
//}
//============================================================
//	int k;
//	cout<<" k = ";
//	cin>>k;
//	int summa=0;
//	for(int j=0;j<n;j++){
//		if(arr[k][j]%2==1){
//			summa+=arr[k][j];
//		}
//	} cout<<summa<<" "<<endl;
//==============================================================

//for(int i=0;i<n;i++){
//	int sanoq=0;
//	for(int j=0;j<m;j++){
//		
//		if(arr[j][i]%2==1){
//			sanoq++;
//		
//		}
//		
//	}cout<<i<<" : "<<sanoq<<endl;	
//} 
//===============================================================
//for(int i=0;i<m;i++){
//	for(int j=1;j<n;j+=2){
//		
//			cout<<arr[i][j]<<"   ";
//		
//	}cout<<endl;
//}

//int k;
//cout<<"k= ";
//cin>>k;
//	for(int j=0;j<n;j++){
//		if(j<=n){
//			arr[j][k]+=20;
//		}
//		
//		cout<<endl;
//	}
//for(int i=0; i<m;i++){
//	for(int j=0;j<n;j++){
//		
//		cout<<arr[i][j]<<" ";
//		
//	}cout<<endl;
//}cout<<endl;
//======================================================================

//int sanoq1=0;
//for(int i=0;i<m;i++){
//	int sanoq=0;
//	for(int j=0;j<n;j++){
//			if(arr[i][j]%2==0) sanoq++;
//	}
//	if(sanoq==n) sanoq1++; cout<<endl;
//}cout<<sanoq1<<endl;
//main();
///===============================================================
for(int i=0;i<n;i++){
	
	for(int j=0;j<m;j++){
		if(i<=j){
			cout<<" + ";
		} cout<<"   ";
	}cout<<endl;

}cout<<endl;
main();
	return 0;
}
