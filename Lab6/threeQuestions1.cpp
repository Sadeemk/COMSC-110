// Lab number: 6.1
// Programmer: Sadeem Khan
// Editor used: TextEdit Mac OS X
// Compilers used: XCode and Terminal


#include <iostream>
using namespace std;


int main()
{

   // identifying output statements
   cout << "Programmer: Sadeem Khan" << endl;
   cout << "Description: This program uses" << endl;
   cout << "if-statements in simple math" << endl;
   cout << "equations. The input is from the console" << endl;
   cout << "and the output reads either correct or incorrect. " << endl;
   cout << endl;



   cout << "Three math addition and subtraction problems: " << endl;
   cout << endl;

   int answer1;
   cout << " 1 + 2 =  ";
   cin >> answer1;
   cin.ignore (1000, 10); 

   if (answer1 == 3)

   {
     cout << "Good work! The answer is correct!" << endl;
     cout << endl;
   }

   else
   {
     cout << "Close! A better answer is 3. " << endl;
     cout << endl;
   }

   int answer2;
   cout << " 100 - 99 =  ";
   cin >> answer2;
   cin.ignore (1000, 10); 

   if (answer2 == 1)

   {
     cout << "Good work! The answer is correct!" << endl;
     cout << endl;
   }

   else
   {
     cout << "Close! A better answer is 1. " << endl;
     cout << endl;

   }

   int answer3;
   cout << " 12 + 21 =  ";
   cin >> answer3;
   cin.ignore (1000, 10); 

   if (answer3 == 33)

   {
     cout << "Good work! The answer is correct!" << endl;
     cout << endl;
   }
   else

   {
     cout << "Close! A better answer is 33. " << endl;
     cout << endl;
   }


}


   
   

