// Lab number: 5.5
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
   cout << "Description: This program tells" << endl;
   cout << "how much money will be saved" << endl;
   cout << "in a savings account after a " << endl;
   cout << "user entered period of time," << endl;
   cout << "amount deposited, and annual interest rate. " << endl;
   cout << endl;

   int years;
   cout << "What are the number of years until retirement? ";
   cin >> years;
   cin.ignore(1000, 10);

   int D;
   cout << "What is the amount deposited per month? ";
   cin >> D;
   cin.ignore(1000, 10);

   double P; // annual interest source: User input from console
   cout << "What is the expected annual interest rate? ";
   cin >> P;
   cin.ignore(1000, 10);


   double decimalInterest = P / 100;
   double p = decimalInterest / 12;
   double T = years * 12;

   double S = D * ((pow(1 + p, T) - 1) / p);


   cout << endl;
   cout << "In " << years << " years,";
   cout << " $" << D << " put in per month" << " at " << P << "%,";
   cout.setf(ios::fixed);
   cout << setprecision(2);
   cout << " will grow to " << "$" << S << "." << endl;

}
