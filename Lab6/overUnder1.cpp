// Lab number: 6.6
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
   cout << "The program will tell the user if the" << endl;
   cout << "guess was correct or incorrect and will" << endl;
   cout << "also say if they were too high or too low." << endl;
   cout << endl; 


   int random;
   random = 1 + (rand() % 10);

  

   int guess;
   cout << "I've chosen a number between 1 and 10. Can you guess it? ";
   cin >> guess;
   cin.ignore(1000, 10);


   if (guess == random)

   cout << "You picked it! It was " << random << endl; 

   if (guess < random)
 
   cout << "Too low! It was " << random << endl;

   if (guess > random)
   
   cout << "Too high! It was " << random << endl;


}