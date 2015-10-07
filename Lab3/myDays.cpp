
#include <iostream>
using namespace std;


int main()
{


   int yearsLivedIn = 18;
   int leapYearsLived = 4;
   int daysBeforeBirth = 157;
   int remainingDays = 111;

   int days = 0;
   
   days = 365 * yearsLivedIn;
   days = leapYearsLived + days;
   days = days - daysBeforeBirth;
   days = days - remainingDays;


   cout << "DOB: June 6, 1998" << endl;
   cout << "Due Date: Sept 10, 2015" << endl;
   cout << "Age at due date: " << days << " days" << endl;

}