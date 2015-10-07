// Lab number: 7.1
// Programmer: Sadeem Khan
// Editor used: TextEdit Mac OS X
// Compilers used: XCode and Terminal


#include <iostream> 
using namespace std; 

  
int main() 
{ 

  // identifying output statements
  cout << "Programmer: Sadeem Khan" << endl;
  cout << "Description: This program uses switch" << endl;
  cout << "logic to tell us if we passed, failed," << endl;
  cout << "or entered something invalid. The program" << endl;
  cout << "asks for our letter grade and outputs whether" << endl;
  cout << "it's a passing grade or failing grade. If the" << endl;
  cout << "entry is not a valid letter grade, the program" << endl;
  cout << "outputs that it is an invalid entry." << endl;
  cout << endl; 


  char grade; 
  cout << "What is your grade? [A, B, C, D, or F]: "; 
  cin >> grade; 
  cin.ignore(1000, 10);


  switch (grade)
  {

   case 'A':
   case 'a':
   case 'B':
   case 'b':
   case 'C':
   case 'c':

     cout << "You pass!" << endl;
     break;

   case 'D':
   case 'd':
   case 'F':
   case 'f':

     cout << "You do not pass!" << endl;
     break;

   default:
     cout << "Invalid entry!" << endl;

  
  } // switch

} // main