//1-vazifa
//
//Quyidagilarga class yarating.
//Har biri uchun kamida 10 tadan hususiyati bo'lsin.
//Har biri uchun 2 tadan constructor bo'lsin. 
//1 chisi malumot qabul qilmaydigan
//2 chisi hamma malumotni qabul qiladigan.
//Har birida DisplayInfo() nomli method bo'lsin
//
//1.Restaurant
//2.MedicalClinic
//3.School
//4.Book
//5.Student
//6.Job
#include <iostream>
using namespace std;
class  Restaurant{
	
public:
	string Restaurantname;
	string Reslocation;
	string Resmanager;
	int Resnumber;
	int Resphonenum;
	int Resroom;
	int Reschair;
	string Reschef;
	double Ressevice;
	double Resstar;
	Resturant(){
		
	}
	Restaurant(string _Restaurantname ,string _Reslocation, 
	string _Resmanager, int _Resnumber,int _Resphonenum,int _Resroom,
	int _Reschair, string _Reschef, double _Ressevice, double _Resstar){
		Restaurantname=_Restaurantname,
		Reslocation=_Reslocation,
		Resmanager=_Resmanager,
		Resnumber=_Resnumber,
		Resphonenum=_Resphonenum,
		Resroom=_Resroom,
		Reschair=_Reschair,
		Reschef=_Reschef,
		Ressevice=_Ressevice,
		Resstar=_Resstar;
	}
	void DisplayInfo() {
		cout<<"------------Resturant-menyu------------"<<endl<<endl;
		cout<<"Resturant name         : "<<Restaurantname<<endl;
		cout<<"Resturant location     : "<<Reslocation<<endl;
		cout<<"Resturant manager      : "<<Resmanager<<endl;
		cout<<"Resturant number       : "<<Resnumber<<endl;
		cout<<"Resturant phone number : "<<Resphonenum<<endl;
		cout<<"Resturant room         : "<<Resroom<<endl;
		cout<<"Resturant chair        : "<<Reschair<<endl;
		cout<<"Resturant chef         : "<<Reschef<<endl;
		cout<<"Resturant service      : "<<Ressevice<<endl;
		cout<<"Resturant star         : "<<Resstar<<endl;
	}
};
int main(){
	Restaurant rs= Restaurant("Rayxon","Toshkent.sh, Chilonzor","R.Bahrom",1006,905383350,42,190,"T.Olim",2000,4.5);
	rs.DisplayInfo();
	
	return 0;
}
