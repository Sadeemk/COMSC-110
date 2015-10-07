// Lab number: 4.1
// Programmer: Sadeem Khan
// Editor used: TextEdit Mac OS X
// Compilers used: XCode and Terminal


#include <iomanip>
#include <iostream>
using namespace std;

#include <cmath>

int main()
{

   int p = 11000;
   double annualInterest = 8.5;
   int years = 30;

   double r = .085 / 12; // 8.5% annual interest
   double n = 12 * years;

   double m = (p * (pow(1 + r, n) * r)/(pow(1 + r, n) -1));



   // identifying output statements
   cout << "Programmer: Sadeem Khan" << endl;
   cout << "Description: This program calculates what" << endl;
   cout << "monthly payments should be on borrowed money," << endl;
   cout << "with annual interest, over a 30 year period." << endl;
   cout << endl;


   
   cout << "Amount borrowed: " << "$" << p << endl;
   cout << "Annual interest: " << annualInterest << "% " << endl;
   cout << "Payback period: " << years <<  " years " <<endl;

   cout.setf(ios::fixed|ios::showpoint);
   cout << setprecision(2);

   cout << "The monthly payment is " << "$" << m << endl;
}








   
   
