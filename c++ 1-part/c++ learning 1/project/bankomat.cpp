#include <conio.h>
#include <iostream>
using namespace std;

int main() {
   double money = 500, newmoney;
   string password = "0000";
   string newpassword;
   string newpassword1;
   string newpassword2;
   string phonenumber;
   int choice;
   int counter = 0;
   
   while(true) {
       cout << "Enter the password: ";
       cin >> newpassword;
       
       if(newpassword == password) {
           while(true) {
               system("CLS");
               cout << "1 -> Withdraw funds \n";
               cout << "2 -> Check balance \n";
               cout << "3 -> Change password \n";
               cout << "4 -> View password \n";
               cout << "5 -> Enable SMS notifications \n";
               cout << "6 -> Exit \n";
               cout << "Enter your choice: "; 
               cin >> choice;
               
               switch(choice) {
                   case 1:
                       cout << "How much would you like to withdraw: "; 
                       cin >> newmoney;
                       
                       if(money >= newmoney && newmoney > 0) {
                           money -= newmoney;
                           cout << "Money withdrawn successfully \n";
                       } else {
                           cout << "Error in withdrawing money!!!";
                       }
                   break;
                   
                   case 2:
                       cout << "Your balance: " << money << "\n";
                   break;
                   
                   case 3:
                       cout << "Enter the current password: "; 
                       cin >> newpassword;
                       cout << "Enter the new password: "; 
                       cin >> newpassword1;
                       cout << "Repeat the new password: "; 
                       cin >> newpassword2;
                       
                       if(password == newpassword && newpassword2 == newpassword1) {
                           password = newpassword1;
                           cout << "Password changed successfully \n";
                       } else {
                           cout << "Error in changing the password!!!";
                       }
                   break;
                   
                   case 4:
                       cout << "Password: " << password << endl;
                   break;
                   
                   case 5:
                       cout << "Enter your phone number: ";
                       cin >> phonenumber;
                       cout << "SMS notifications enabled \n";
                   break;
                   
                   case 6:
                       cout << "Operation completed, thank you \n";
                   break;
               }
               
               getch();
           }
       } else {
           ++counter;
           
           if(counter == 3) {
               cout << "Card is locked!!!";
               return 0;
           }
           
           cout << "Incorrect password!!!";
       } 
   }
   
   return 0;
}

