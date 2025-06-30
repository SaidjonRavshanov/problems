#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	///PROJECT
	
	double money=1000,newMoney;
	string password= "1402";
	string newPasword_1;
	string newPasword_2;
	string newPasword_3;
	string phoneNumber ;
	int choice;
	
	int counter=0;
	while(true)
	{
		cout << "Enter pasword:" ;cin >>newPasword_1;
		if(newPasword_1==password)
		{
			while(true)
			{
				
				
				cout << "1=> Withdraw money  \n";
				cout << "2=> View funds      \n";
				cout << "3=> Change password \n";
				cout << "4=> View password   \n";
				cout << "5=> Connect to SMS  \n";
				cout << "6=> To complete     \n";
				cout << "ENTER: ";cin >> choice; 
				
				switch(choice)
				{
				case 1 :
					cout << "How much do you want to withdraw?";
					cin >> newMoney ;
					
					if(money>=newMoney && newMoney>0)
					{
						money=money-newMoney;
						cout << "The money was withdrawn \n ";
					}
					else
					{
						cout << "Payment error!  \n";
					}
					break;
					
				case 2:
					cout << "Your money :" << money << endl;
					break;
					
				case 3:
					cout << "Enter a password  "    ;cin >> newPasword_1;
					cout << "Enter a new password " ;cin >> newPasword_2;
					cout << "Re-enter  "            ;cin >> newPasword_3;
					
					if(password==newPasword_1 && newPasword_2==newPasword_3)
					{
						password==newPasword_2;
						cout << "Password changed \n ";
					}
					else
					{
						cout << "Password change error!  \n";
					}
					break;
					
				case 4:
					cout << "Your pasword:" << password << endl;
					break;
					
				case 5:
					cout << "Enter your phone number: ";
					cin >> phoneNumber;
					cout << " Connect SMS massege \n " ;
					break;
					
				case 6:
					cout << "Thank you, the process is complete \n";
					break;
				}
				getch();
				
			}
			
		}else{
				++counter;
				if(counter==3)
				{
					cout << " The card is locked !!!  \n ";
					return 0;
				}
				cout << "Error password!" << endl;
			}
		
		
		return 0;
	}
}
	
