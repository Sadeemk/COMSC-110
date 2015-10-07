// Lab number: 4.2
// Programmer: Sadeem Khan
// Editor used: TextEdit Mac OS X
// Compilers used: XCode and Terminal

#include <iomanip>
#include <iostream>
using namespace std;



#include <cmath>



int main()

{


   int h = 50;
   double d = sqrt(.8 * h);

   // identifying output statements
   cout << "Programmer: Sadeem Khan" << endl;
   cout << "Description: This program tells" << endl;
   cout << "how far a lighthouse can be seen" << endl;
   cout << "by a boat out at sea." << endl;
   cout << endl;

   cout.setf(ios::fixed);
   cout << setprecision(0);
  
   cout << "A " << h << " foot high lighthouse is seen by the boat from " << d << " miles away. " << endl;


}