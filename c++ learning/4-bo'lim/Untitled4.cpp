#include <iostream>
using namespace std;
//1. ta son berilgan. Shu sonni necha xonali ekanligini rekursiya orqali aniqlang.
//
//2. int toifasida a va b qiymatni qabul qiluvchi va a dan b gacha barcha sonlarni 
//yig‘indisini aniqlovchi int turdagi recursive funksiya
//  yozing.
int f(int son){
	if(son==0) return 0;
	return 1+f(son/10);
}
int f1(int a,int b){
	if(a==b) return -b;
	return a+1+f1(a+1,b);
}
int main(){
	cout<<"f \n";
    int son1;
    cin>>son1;
    cout<<f(son1)<<endl;
    cout<<"f1 \n";
    int n,n1;
    cin>>n>>n1;
    cout<<f1(n,n1)<<endl;
    
    main();
}
