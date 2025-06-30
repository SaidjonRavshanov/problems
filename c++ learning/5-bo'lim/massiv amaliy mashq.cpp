#include <iostream>
#include <ctime>
#include <cstdlib> 
using namespace std;

int getrandomnumber(int a, int b) {
    int number = rand() % (b - a + 1) + a;
    return number;
}
//bool islowerv(string s){
//	int sanoq=0;
//	for(int i=0;i<s.length();i++){
//		if(islower(s[i])) sanoq++;
//	}
//	if(sanoq==s.length()) return true;
//	return false;
//}
bool tubv(int son){
	int sanoq1=0;
	for(int i=0;i<=son;i++){
		if(son%i==0) sanoq1++;
	}
	return (sanoq1==2);
}
int main() {
    srand(time(0));
    int n;
    cout << "Massiv elementlar soni: ";
    cin >> n;
    
    int arr[n];
   // int arr1[n];
   // int arr2[n];
    
    for (int i = 0; i < n; i++) {
        arr[i] = getrandomnumber(10,20);
    	cout << arr[i] << " "; //cin>>arr[i];
    } cout<<"\n";
//    for (int i = 0; i < n; i++) {
//        arr1[i]= getrandomnumber(10,20);
//        cout<<arr1[i]<<" ";
//    } 
	cout<<"\n";
    //1-miol
//    int summa=0;
//    for(int i=0;i<n;i++){
//    	int q=arr[i]%2;
//    	if(q==1 || q==-1 ){
//    		cout<<" toqlar "<<arr[i];
//    		summa+=arr[i];
//		}
//	}
//	cout<<" \n toqlar yig'indisi = "<<summa<<endl;
  //2-misol
//cout<<arr[0]+arr[1]+arr[n-1]+arr[n-2];
//3-misol

//for(int i=0;i<n;i++){
//	if(arr[i]%2==0){
//		arr[i]*=4;
//		
//	}
//	cout<<arr[i]<<" ";
//	
//}
//    cout << endl;
//    main();
//}
//4-misol

//int sanoq=0;
//for(int i=0; i<n ; i++){
//if(10<=arr[i] && arr[i]<=100)
//sanoq++;
//}
//cout<<boolalpha<<((sanoq==n)? true : false );
//5-misol
//	int min=arr[0];	
//for(int i=0; i<n;i++){
//  if (arr[i] < min) {
//            min = arr[i];  // Kichik qiymatni topib, min o'zgaruvchisini yangilaymiz
//        }
//}
//cout<<"min = "<<min;
//int max=arr[0];
//int index=0;
//for(int i=0;i<n;i++){
//	if(max<arr[i]){
//		max=arr[i];
//		index=i;
//	} 
//}
////cout<<"engkatta elementi "<<max<<" index = "<<index<<endl;
//cout<<"max -> arr["<<index<<"]= "<<max<<endl;
//7-misol

//int sanoq=0;
//for(int i=0; i<n-1 ; i++){
//	if(arr[i]<arr[i+1]){
//		
//		sanoq++;
//		
//	}
//} cout<<boolalpha<<((sanoq==n-1)? true : false )<<endl;
//cout<<sanoq<<endl;
//9-misol
//int k=arr[0];
//int l=arr[1];
//for(int i=0; i<n-1 ; i++){
//	if(k+l<arr[i]+arr[i+1]){
//		k=arr[i];
//		l=arr[i+1];
//	}
//}cout<<k<<" "<<l<<endl;
//10-mis0l
//int soni=0;
//for(int i=0;i<n-1;i++){
//	if(arr[i]>arr[i+1]){
//		soni++;
//	}
//}cout<<soni<<endl;
//11-misol
//for(int i=0;i<n;i++){
//	arr2[i]=arr[i]+arr1[i];
//	cout<<arr2[i]<<" ";
//}
//string-----------------------------------------------------------------

//int n;
//cout<<"massiv elementlar soni : ";
//cin>>n;
//string arr[n];
//cin.ignore();
//for(int i=0;i<n;i++){
//	cout<<i<<" : ";
//	
//	getline(cin,arr[i]);
//}
//12-misol
//int sanoq=0;
//for(int i=0;i<n;i++){
//	string s=arr[i];
//	if(s[0]=='A'){
//		sanoq++;
//	}
//}
//cout<<sanoq<<endl;
//13-misol
//for(int i=0;i<n;i++){
//	if(islowerv(arr[i])) cout<<arr[i]<<" ";
//}
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

