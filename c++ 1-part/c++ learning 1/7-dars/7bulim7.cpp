#include <iostream>
using namespace std;
int main(){
//7-vazifa
//
//1. 5 ta son berilgan. Shu sonlar ichida musbat sonlarni miqdorini va yig'indisini aniqlang.
//
//2. 5 ta son berilgan. Shu sonlar ichida nechta 2 xonali son borligini aniqlovchi dastur tuzing.

	//------------------------------------------------------------
	//1-misol
		int q,w,e,r,t;
	cout<<" ketma ket 5 ta son kiriting ";
	cin>>q>>w>>e>>r>>t;
	int sanoq3=0;
	int summa=0;
    if(q>0){
		++sanoq3;
		summa+=q;
	}
	if(w>0){
		++sanoq3;
		summa+=w;
	}
	if(e>0){
		++sanoq3;
		summa+=e;
	}
	if(r>0){
		++sanoq3;
		summa+=r;
	} 
	if(t>0){
		++sanoq3;
		summa+=t;
	} 
	
	cout<<" 5 ta son ichidan "<<sanoq3<<" ta musbat , yig'indisi= "<<summa<<" \n";
  
	//-----------------------------------------------------------
	//2-misol
int c, k, u, i, o;
    cout << "5 ta son kiriting: ";
    cin >> c >> k >> u >> i >> o;  
    int sanoq2 = 0;

    if (c>=10 && c<=99) {
        ++sanoq2;
    }
    if (k>=10 && k<=99) {
        ++sanoq2;
    }
    if (u>=10 && u<=99) {
        ++sanoq2;
    }
    if (i>=10 && i<=99) {
        ++sanoq2;
    }
    if (o>=10 && o<=99) {
        ++sanoq2;
    }

  cout<<" 5 ta son ichidan "<<sanoq2<<" ta 2 xonali son bor \n";
	//--------------------
	main();
	return 0;
	
}
