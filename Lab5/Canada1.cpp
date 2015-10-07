// Lab number: 5.4
// Programmer: Sadeem Khan
// Editor used: TextEdit Mac OS X
// Compilers used: XCode and Terminal

#include <iomanip>
#include <iostream>
using namespace std;


int main()
{

   // identifying output statements
   cout << "Programmer: Sadeem Khan" << endl;
   cout << "Description: This program converts" << endl;
   cout << "any user entered temperature from " << endl;
   cout << "Celsius to Fahrenheit." << endl;
   cout << endl;

   double c;
   
   cout << "What is the temperature in Celsius? ";
   cin >> c;
   cin.ignore(1000, 10);

   double f = ( (9.0 / 5) * c ) + 32;

 
   cout << c << " Celsius " << " is equal to ";
   cout.setf(ios::fixed|ios::showpoint);
   cout << setprecision(1) << f << " Fahrenheit." << endl;


}