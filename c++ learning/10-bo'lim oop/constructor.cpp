#include <iostream>
using namespace std;
class Car{
public:
	string color;
	string model;
	int price;
	double fast100;
	int year;
	void display(){
		cout<<"rangi   : "<<color<<endl;
		cout<<"model   : "<<model<<endl;
		cout<<"narxi   : "<<price<<endl;
		cout<<"fast100 : "<<fast100<<endl;
		cout<<"yili    : "<<year<<endl;
		cout<<"------------------------"<<endl;
	}
	int yoshi(int yosh){
		return yosh-year;
	}
	Car(string str){
		model=str;
	}
};
int main(){
	Car car1=Car("nexia");
	
	
}
