#include <iostream>
#include <ctime>
#include <algorithm>
using namespace std;

int getRandomNumber(int start, int finish) {
    int resault = rand() % (finish - start + 1) + start;
    return resault;
}


int main() {

    srand(time(0));

    string sorov;

    cout << "Massiv elemrntini qo'lda kiritmoqchimisiz y/n :"; cin >> sorov;

    int n;

    int arr[n];
    int arrLength = sizeof(arr) / sizeof(arr[0]);



  while (true) {
      if (sorov == "n") {
          cout << "\nMassiz ichidagi elementlar sonini kiriting Men uni randomni to'ldirib beraman :"; cin >> n ;
          arr[n];
          for (int i  = 0; i < n; i++) {
              arr[i] = getRandomNumber(10,150);
          }

          break;
      } else if(sorov == "y") {
          cout << "\nMassiz ichidagi elementlar sonini kiriting, Va shuncha sonni o'zingiz kiriting:"; cin >> n ;
          arr[n];
          for (int i  = 0; i < n; i++) {
              int foydalanuvchiSoni;
             cout << i << ':'; cin >> foydalanuvchiSoni;
              arr[i] = foydalanuvchiSoni;
          }
          break;

      } else {
          sorov = "";
          cout << sorov << "Massiv elemrntini qo'lda kiritmoqchimisiz y/n yes = y  no = n :"; cin >> sorov;
      }
  }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }

// 1. N ta elementdan iborat 1 o‘lchamli massive berilgan. Agar elementlari o‘suvchi bo‘lsa true aks holda false chiqaring.

    // bool natija;
    // for (int i = 0; i < n-1; i++) {
    //     if (arr[i] < arr[i + 1]) natija = true;
    //     else {
    //         natija = false;
    //         break;
    //     }
    // }
    //
    // cout << boolalpha << natija << endl;

// 2. N ta elementdan iborat 1 o‘lchamli massive berilgan. Agar elementlari kamayuvchi bo‘lsa true aks holda false chiqaring.
    // bool natija;
    // for (int i = 0; i < n-1; i++) {
    //     if (arr[i] > arr[i + 1]) natija = true;
    //     else {
    //         natija = false;
    //         break;
    //     }
    // }
    //
    // cout << boolalpha << natija << endl;

// 3. N ta elementdan iborat 1 o‘lchamli massive berilgan. Eng katta elementi bilan eng kichik elementini
// joyini almashtiring. Va massiveni chiqaring.
    // Eng katta va eng kichik elementlarni topish

    int maxIndex = 0, minIndex = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] < arr[maxIndex]) maxIndex = i;
        if(arr[i] > arr[minIndex]) maxIndex = i;
    }
cout<<endl<<"max "<<arr[maxIndex]<<"| min "<<arr[minIndex]<<endl;
    swap(arr[maxIndex], arr[minIndex]);

    cout << endl;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }






    return 0;
}
