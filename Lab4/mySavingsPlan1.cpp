// Lab number: 4.3
// Programmer: Sadeem Khan
// Editor used: TextEdit Mac OS X
// Compilers used: XCode and Terminal


#include <iomanip>
#include <iostream>
using namespace std;


#include <cmath>

int main()
{

   int years = 2;
   int D = 570;

   double P = 3; // annual interest source: bankofamerica.com
   double p = .03 / 12;
   double T = years * 12;

   double S = D * ((pow(1 + p, T) - 1) / p);


// identifying output statements
   cout << "Programmer: Sadeem Khan" << endl;
   cout << "Description: This program tells" << endl;
   cout << "how much money will be saved" << endl;
   cout << "in a savings account after a " << endl;
   cout << "a certain period of time, with a " << endl;
   cout << "an accurate annual interest rate. " << endl;
   cout << endl;

   cout << "In " << years << " years,";
   cout << " $" << D << " put in per month" << " at " << P << "%,";
   cout.setf(ios::fixed);
   cout << setprecision(2);
   cout << " will grow to " << "$" << S << "." << endl;

}
