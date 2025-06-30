#include <iostream>
#include <cctype>
using namespace std;
int okmiqdor(string str){
	int miqdor=0;
	string newstr="";
	for(int i=0;i<str.length()-1;i++){
		//newstr=newstr+str[i]+str[i+1];
//		if(str[i]=='o' && str[i+1]=='k' ) 
//		{
//			miqdor++;
//			i++;
//		}
         if(str[i]=='o'){
	         if(str[i+1]=='k') miqdor++;
            }
		
	
	}
	return miqdor;
	
}int main(){
	string suz;
	getline(cin, suz);
	cout<<okmiqdor(suz)<<" ta ok bor \n";
	main();
}
