// Lab number: 6.8
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
   cout << "Description: This program is the game of" << endl;
   cout << "war. It randomly chooses a card for the computer " << endl;
   cout << "and the human. Then it outputs both cards along " << endl;
   cout << "with who won the game. The winner is whoever " << endl;
   cout << "has the biggest card value." << endl;
   cout << endl;

  // Computer card value

   int computer;
   computer = 2 + rand() % 12;

   if (computer == 2)
     cout << "Computer's card is a 2";

   if (computer == 3)
     cout << "Computer's card is a 3";

   if (computer == 4)
     cout << "Computer's card is a 4";

   if (computer == 5)
     cout << "Computer's card is a 5";

   if (computer == 6)
     cout << "Computer's card is a 6";

   if (computer == 7)
     cout << "Computer's card is a 7";

   if (computer == 8)
     cout << "Computer's card is a 8";

   if (computer == 9)
     cout << "Computer's card is a 9";

   if (computer == 10)
     cout << "Computer's card is a 10";

   if (computer == 11)
     cout << "Computer's card is a Jack";

   if (computer == 12)
     cout << "Computer's card is a Queen";

   if (computer == 13)
     cout << "Computer's card is a King";

   if (computer == 14)
     cout << "Computer's card is a Ace";

  // Computer suit

   int suit;
   suit = rand() % 4;

   if (suit == 0)
     cout << " of Spades" << endl;

   if (suit == 1)
     cout << " of Diamonds" << endl;

   if (suit == 2)
     cout << " of Hearts" << endl;

   if (suit == 3)
     cout << " of Clubs" << endl;


  // Human card value

   int human;
   human = 2 + rand() % 12;

   if (human == 2)
     cout << "Human's card is a 2 ";

   if (human == 3)
     cout << "Human's card is a 3 ";

   if (human == 4)
     cout << "Human's card is a 4 ";

   if (human == 5)
     cout << "Human's card is a 5 ";

   if (human == 6)
     cout << "Human's card is a 6 ";

   if (human == 7)
     cout << "Human's card is a 7 ";

   if (human == 8)
     cout << "Human's card is a 8 ";

   if (human == 9)
     cout << "Human's card is a 9 ";

   if (human == 10)
     cout << "Human's card is a 10 ";

   if (human == 11)
     cout << "Human's card is a Jack ";

   if (human == 12)
     cout << "Human's card is a Queen ";

   if (human == 13)
     cout << "Human's card is a King ";

   if (human == 14)
     cout << "Human's card is a Ace ";

  // Human suit

   int hSuit;
   hSuit = rand() % 4;

   if (hSuit == 0)
     cout << "of Spades" << endl;

   if (hSuit == 1)
     cout << "of Diamonds" << endl;

   if (hSuit == 2)
     cout << "of Hearts" << endl;

   if (hSuit == 3)
     cout << "of Clubs" << endl;

  
   if (computer < human)
   
     cout << "Human wins!" << endl;
   

   if (computer == human)
   
     cout << "It's a tie!" << endl;
   

   if (computer > human)
   
     cout << "Computer wins!" << endl;
   


 

}






