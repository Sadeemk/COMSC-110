// Lab number: 4.4
// Programmer: Sadeem Khan
// Editor used: TextEdit Mac OS X
// Compilers used: XCode and Terminal


#include <iomanip>
#include <iostream>
using namespace std;

int main ()
{

   int age1 = 19;
   int age2 = 21;
   int age3 = 30;
   double averageAge;

   averageAge = age1 + age2 + age3;
   averageAge = averageAge / 3;



   // identifying output statements
   cout << "Programmer: Sadeem Khan" << endl;
   cout << "Description: This program helps" << endl;
   cout << "us learn how to use math division" << endl;
   cout << "and round to 2 decimal points." << endl;
   cout << endl;

   cout.setf(ios::fixed|ios::showpoint);
   cout << setprecision(2);

   cout << "The average of the three ages is " << averageAge << "." << endl;
}