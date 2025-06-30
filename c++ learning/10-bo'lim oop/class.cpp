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
};
int main(){
	Car car1=Car();
	car1.color="white";
	car1.model="tesla";
	car1.price=10000;
	car1.fast100=2.8;
	car1.year=2022;
	car1.display();
	
	Car car2=Car();
	car2.color="black";
	car2.model="BMW";
	car2.price=40000;
	car2.fast100=2.1;
	car2.year=2023;
	car2.display();
	cout<<car1.yoshi(2024)<<endl;
	cout<<car2.yoshi(2024)<<endl;
	
}
