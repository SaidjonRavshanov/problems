#include <iostream>
using namespace std;
int main(){
//6-vazifa
//
//1. 1 ta 4 xonali son berilgan. Shu son tarkibidagi juft raqamlar miqdorini aniqlang.
//
//2. 5 ta son berilgan. Shu sonlar ichida nechta juft son borligini aniqlovchi dastur tuzing.
//
//3. 5 ta son berilgan. Shu sonlar ichida nechta musbat son borligini aniqlovchi dastur tuzing.
	//1-misol
		int b;
	cout<<"b= ";
	cin>>b;
int sanoq1=0;
if(b>=1000 && b<=9999){
	if(b/1000%2==0){
		++sanoq1;
	}
	if(b/100%10%2==0){
		++sanoq1;
	}
	if(b/10%10%2==0){
		++sanoq1;
	}
	if(b%10%2==0){
		++sanoq1;
	} 
	cout<<"4 xonali son juft raqamlari "<<sanoq1<<" ta \n";
} else cout<<" 4 xonali son kiritilmadi ";
	
	//------------------------------------------------------------
	//2-misol
  int c, k, u, i, o;
    cout << "5 ta son kiriting: ";
    cin >> c >> k >> u >> i >> o;  
    int sanoq2 = 0;

    if (c % 2 == 0) {
        ++sanoq2;
    }
    if (k % 2 == 0) {
        ++sanoq2;
    }
    if (u % 2 == 0) {
        ++sanoq2;
    }
    if (i % 2 == 0) {
        ++sanoq2;
    }
    if (o % 2 == 0) {
        ++sanoq2;
    }

  cout<<" 5 ta son ichidan "<<sanoq2<<" ta juft "<<5-sanoq2<<" ta toq son bor \n";
	//-----------------------------------------------------------
	//3-misol
	int q,w,e,r,t;
	cout<<" ketma ket 5 ta son kiriting ";
	cin>>q>>w>>e>>r>>t;
	int sanoq3=0;
    if(q>0){
		++sanoq3;
	}
	if(w>0){
		++sanoq3;
	}
	if(e>0){
		++sanoq3;
	}
	if(r>0){
		++sanoq3;
	} 
	if(t>0){
		++sanoq3;
	} 
	
	cout<<" 5 ta son ichidan "<<sanoq3<<" ta musbat "<<5-sanoq3<<" ta manfiy son bor \n";

	//--------------------
	main();
	return 0;
	
}
