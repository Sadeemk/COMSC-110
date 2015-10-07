// Lab number: 7.3
// Programmer: Sadeem Khan
// Editor used: TextEdit Mac OS X
// Compilers used: XCode and Terminal


#include <iostream>
using namespace std;



int main()

{

   // identifying output statements
   cout << "Programmer: Sadeem Khan" << endl;
   cout << "Description: This program tells" << endl;
   cout << "how much change will be recieved from" << endl;
   cout << "a user enterd cash payment amount and" << endl;
   cout << "tendered amount. The program also" << endl;
   cout << "shows the specific denomination being paid" << endl;
   cout << "out. The output skips past the denomination" << endl;
   cout << "of bills that are zero. The program loops until" << endl;
   cout << "either 0 or a negative value is entered for" << endl;
   cout << "either of the inputs." << endl;
   cout << endl; 

 while (true) 
 { 
      int cashPayment;
   cout << "Cash payment amount: [enter 0 or negative value to exit]: ";
   cin >> cashPayment;
   cin.ignore(1000, 10);

   if (cashPayment <= 0) break; // breaks loop if 0 or negative value is entered

   int amountTendered;
   cout << "Tendered amount: [enter 0 or negative value to exit]: ";
   cin >> amountTendered;
   cin.ignore(1000, 10);

   if (amountTendered <= 0) break; // breaks loop if 0 or negative value is entered
   int changeDue = amountTendered - cashPayment;
 
   cout << "Change due: " << changeDue << endl;
   cout << endl;


   int hundredThousands = changeDue / 100000;
   changeDue = changeDue % 100000;

   int tenThousands = changeDue / 10000;
   changeDue = changeDue % 10000;
   int fiveThousands = changeDue / 5000;
   changeDue = changeDue % 5000;
   int oneThousands = changeDue / 1000; 
   changeDue = changeDue % 1000;

   int fiveHundred = changeDue / 500; 
   changeDue = changeDue % 500;

   int oneHundred = changeDue / 100; 
   changeDue = changeDue % 100;

   int fifty = changeDue / 50; 
   changeDue = changeDue % 50;

   int twenty = changeDue / 20; 
   changeDue = changeDue % 20;

   int ten = changeDue / 10; 
   changeDue = changeDue % 10;

   int five = changeDue / 5; 
   changeDue = changeDue % 5;

   int two = changeDue / 2; 
   changeDue = changeDue % 2;

   int one = changeDue / 1; 
   changeDue = changeDue % 1;

   cout << "Change paid out in:" << endl;

   if (hundredThousands > 0)
     cout << " There will be " << hundredThousands << " Hundred thousand dollar bills" << endl;

   if (tenThousands > 0)
     cout << " There will be " << tenThousands << " Ten thousand dollar bills" << endl;

   if (fiveThousands > 0)
     cout << " There will be " << fiveThousands << " Five thousand dollar bills" << endl;

   if (oneThousands > 0)     cout << " There will be " << oneThousands << " One thousand dollar bills" << endl;

   if (fiveHundred > 0)
     cout << " There will be " << fiveHundred << " Five hundred dollar bills" <<endl;

   if (oneHundred > 0)
     cout << " There will be " << oneHundred << " One hundred dollar bills" << endl;

   if (fifty > 0)
     cout << " There will be " << fifty << " Fifty dollar bills" << endl;

   if (twenty > 0)
     cout << " There will be " << twenty << " Twenty dollar bills" << endl;

   if (ten > 0)
     cout << " There will be " << ten << " Ten dollar bills" << endl;

   if (five > 0)
     cout << " There will be " << five << " Five dollar bills" << endl;

   if (two > 0)
     cout << " There will be " << two << " Two dollar bills" << endl;

   if (one > 0)
     cout << " There will be " << one << " One dollar bills" << endl;
   
     cout << endl; // for spacing

 } // while

} // main