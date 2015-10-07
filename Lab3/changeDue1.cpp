#include <iostream>
using namespace std;



int main()

{
   int cashPayment = 86788;   int amountTendered = 100000;   int changeDue = amountTendered - cashPayment;
   cout << "Cash payment amount: " << cashPayment << endl; 
   cout << "Tendered amount: " << amountTendered << endl; 
   cout << "Change due: " << changeDue << endl;

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


   cout << " There will be " << hundredThousands << " Hundred thousand dollar bills" << endl;
   cout << " There will be " << tenThousands << " Ten thousand dollar bills" << endl;
   cout << " There will be " << fiveThousands << " Five thousand dollar bills" << endl;   cout << " There will be " << oneThousands << " One thousand dollar bills" << endl;
   cout << " There will be " << fiveHundred << " Five hundred dollar bills" <<endl;
   cout << " There will be " << oneHundred << " One hundred dollar bills" << endl;
   cout << " There will be " << fifty << " Fifty dollar bills" << endl;
   cout << " There will be " << twenty << " Twenty dollar bills" << endl;
   cout << " There will be " << ten << " Ten dollar bills" << endl;
   cout << " There will be " << five << " Five dollar bills" << endl;
   cout << " There will be " << two << " Two dollar bills" << endl;
   cout << " There will be " << one << " One dollar bills" << endl;

}