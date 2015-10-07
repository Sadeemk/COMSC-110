// Lab number: 5.6
// Programmer: Sadeem Khan
// Editor used: TextEdit Mac OS X
// Compilers used: XCode and Terminal


#include <iostream>
#include <string>
using namespace std;


int main()
{

   // identifying output statements
   cout << "Programmer: Sadeem Khan" << endl;
   cout << "Description: This program" << endl;
   cout << "is a console program that can" << endl;
   cout << "read and print four inputs " << endl;
   cout << "in a certain order." << endl;
   cout << endl;



   int age;
   cout << "Please enter your age: ";
   cin >> age;
   cin.ignore(1000, 10);

   
   string name;
   cout << "Please enter your name: ";
   getline(cin, name);


   double t;
   cout << "Please enter the current temperature outside right now (Fahrenheit): ";
   cin >> t;
   cin.ignore(1000, 10);

   
   string city;
   cout << "What city are you currently in? ";
   getline(cin, city);

   cout << endl;
   cout << name << " is " << age << " years old." << endl;
   cout << "It is currently " << t << " degrees Fahrenheit in " << city << "." << endl;

}