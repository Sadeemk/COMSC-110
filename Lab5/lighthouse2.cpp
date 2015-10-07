// Lab number: 5.2
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
   cout << "how far a lighthouse can be seen" << endl;
   cout << "by a boat out at sea using the height" << endl;
   cout << "of the lighthouse entered by the user." << endl;
   cout << endl;


   double h;
 
   cout << "What is the height of the lighthouse in feet? ";
   cin >> h;
   cin.ignore(1000, 10);

   double d = sqrt(.8 * h);

   cout << "A " << h << " foot high lighthouse is seen by the boat from ";
   cout.setf(ios::fixed);
   cout << setprecision(0) << d << " miles away. " << endl;
  

}