// Lab number: 6.4
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
   cout << "Celsius to Fahrenheit. The program will" << endl;
   cout << "keep looping until the sentinel value of " << endl;
   cout << "-999 is entered from the console." << endl;
   cout << endl;


 while (true)
 { 
   

   double c;
   cout << "What is the temperature in Celsius? [-999 to quit]: ";
   cin >> c;
   cin.ignore(1000, 10);

   double f = ( (9.0 / 5) * c ) + 32;


   if (c == -999) break;

   else 
   
   cout << c << " Celsius " << " is equal to ";
   cout.setf(ios::fixed|ios::showpoint);
   cout << setprecision(1) << f << " Fahrenheit." << endl;

   cout.unsetf(ios::fixed|ios::showpoint); // resets the formatting so that the next input does not get formatted
   cout << setprecision(6);
   cout << endl;
   
   
   

 }
   
}