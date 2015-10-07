// Lab number: 6.7
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
   cout << "Description: This program picks a random" << endl;
   cout << "number and asks the user to guess it." << endl;
   cout << "The program will keep asking for the number" << endl;
   cout << "until the correct one is entered by the user." << endl;
   cout << "The program will either say too high or too low" << endl;
   cout << "to help the user get to the correct number." << endl;
   cout << endl; 



   int random;
   random = 1 + (rand() % 100);

   int guess;
   cout << "I've chosen a number between 1 and 100. Can you guess it? ";
   

  while (true)
  {  
 
   cin >> guess;
   cin.ignore(1000, 10);


   if (guess == random)
   {

   cout << "You picked it! It was " << random << endl; 
   break;

   }

   if (guess < random)
     cout << "Too low! Try again: "; 


   if (guess > random)
     cout << "Too high! Try again: ";
  
  } // while

} // main