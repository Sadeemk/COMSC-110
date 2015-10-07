// Lab number: 5.1
// Programmer: Sadeem Khan
// Editor used: TextEdit Mac OS X
// Compilers used: XCode and Terminal


#include <iomanip>
#include <iostream>
using namespace std;

#include <cmath>

int main()
{


// identifying output statements
   cout << "Programmer: Sadeem Khan" << endl;
   cout << "Description: This program calculates what" << endl;
   cout << "monthly payments should be on borrowed money," << endl;
   cout << "with annual interest, over a 30 year period." << endl;
   cout << "The input is typed in by the user from the keyboard." << endl;
   cout << endl;


   int years = 30;

   int p;
   cout << "What is the dollar amount borrowed? ";
   cin >> p;
   cin.ignore(1000, 10);

   double annualInterest;
   cout << "What is the annual interest rate? ";
   cin >> annualInterest;
   cin.ignore(1000, 10);


   double decimalInterest = annualInterest / 100;
   double r = decimalInterest / 12; 
   double n = 12 * years;

   double m = (p * (pow(1 + r, n) * r)/(pow(1 + r, n) -1));

   cout << endl;
   cout << "Amount borrowed: " << "$" << p << endl;
   cout << "Annual interest: " << annualInterest << "% " << endl;
   cout << "Payback period: " << years <<  " years " <<endl;

   cout.setf(ios::fixed|ios::showpoint);
   cout << setprecision(2);

   cout << "The monthly payment is " << "$" << m << endl;

}
