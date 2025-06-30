#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;
//5-vazifa
//
//Kamida bitta probeldan iborat satr berilgan.
//Satridagi birinchi va ikkinchi probel orasidagi belgilarni 
//chiqaruvchi programma tuzilsin. Agar satr faqat bitta probeldan iborat 
//bo'lsa, bo'sh satr chiqarilsin.
string masala(string s){
	int p=s.find(' ');
	int p1=s.find(' ',p+1);
	return s.substr(p+1,p1-p);
}
	int main(){//case ->(1) salom(2) alekum(3) yaxshimi(4) nima(5) gap -> salom 
		string s;
		getline(cin,s);
		cout<<masala(s);
		
	}
	
