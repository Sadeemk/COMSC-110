// Lab number: 6.2
// Programmer: Sadeem Khan
// Editor used: TextEdit Mac OS X
// Compilers used: XCode and Terminal


#include <iomanip>
#include <iostream>
#include <string>
using namespace std;


#include <cmath>

int main()
{

   // identifying output statements
   cout << "Programmer: Sadeem Khan" << endl;
   cout << "Description: This program asks" << endl;
   cout << "for a password before moving on " << endl;
   cout << "with the prompts and calculations." << endl;
   cout << "It will keep asking for a password until " << endl;
   cout << "the correct one is given. " << endl;
   cout << endl;



  // input values
  int years = 10;
  int D = 100;

  // output (calculated) values
  double p = 0.075 / 12; // 7.5% annual interest rate
  double T = years * 12;
  double S = D * ((pow(1 + p, T) - 1) / p);

  string password;

  while (true)
  {


      cout << "Enter the password: " ;
      getline(cin, password);


    if (password == "98password98") // The password is 98password98

    {
      // echoing input values, unformatted
      cout << endl;
      cout << "In " << years << " years, $";
      cout << D << " deposited per month will grow to $";

      // formatting output (see 4.2)
      cout.setf(ios::fixed|ios::showpoint);
      cout << setprecision(2);
      cout << S << "." << endl;

      break; // after the correct passoword is entered the program will run and then stop.
      
    }

    else

    {	 
   

    } // if else

  } // while

} // main