// Lab number: 6.5
// Programmer: Sadeem Khan
// Editor used: TextEdit Mac OS X
// Compilers used: XCode and Terminal


#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;




int main()

{

 srand(time(0));


   // identifying output statements
   cout << "Programmer: Sadeem Khan" << endl;
   cout << "Description: This program randomly" << endl;
   cout << "chooses the result of flipping a coin. " << endl;
   cout << "The output only prints the result of the toss" << endl;
   cout << "being either heads or tails." << endl;
   cout << endl;


   int choice;
   choice = 1 + rand() % 2;

   if (choice == 1)
     cout << "Heads" << endl;

   else
     cout << "Tails" << endl;


}


  
