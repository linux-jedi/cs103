//
//  Caleb Thomas
//  calebtho@usc.edu
//
//  Program Description: Prints out each step and the total number of
//                       steps in the hailstone sequence for a number

#include <iostream>

using namespace std;

void printHailstone(int x);

int main()
{
   
   // Declare Variables
   int x;
   
   // Get Input
   cout << "Please enter an integer: ";
   cin >> x;
   
   // Hailstone Loop
   printHailstone(x);
   
   return 0;
}

void printHailstone(int x)
{
   int counter = 0;
   
   // Execute algorithm until x is equal to 1
   while(x != 1)
   {
      if(x % 2 == 0)
      {
         x /= 2;
      }
      else
      {
         x = x * 3 + 1;
      }
      
      cout << x << " ";
      counter++;
   }
   
   cout << endl << "Length: " << counter << endl;
}