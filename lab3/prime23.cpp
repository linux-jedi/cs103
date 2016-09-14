//
//  prime23.cpp
//  lab-controls
//
//  Program Description: Determines if a number is exclusively comprised of the factors 2 and 3.
//  If it is, the number of 2's and 3's is printed out.
//
//  Created by Caleb Thomas on 9/6/16.
//  Copyright © 2016 Caleb Thomas. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
   // Declare and set variables
   int twoCount = 0;
   int threeCount = 0;
   int x;
   bool isPrime23 = true;
   
   // Get Input
   cout << "Enter a positive integer: ";
   cin >> x;
   
   // Execute algorithm
   while(x != 1)
   {
      if(x % 2 == 0)
      {
         twoCount++;
         x /= 2;
      }
      else if(x % 3 == 0)
      {
         threeCount++;
         x /= 3;
      }
      else
      {
         isPrime23 = false;
         break;
      }
   }
   
   // Output results
   if(isPrime23)
   {
      cout << "Yes" << endl;
      cout << "Twos=" << twoCount << " Threes=" << threeCount << endl;
   }
   else
   {
      cout << "No" << endl;
   }
   return 0;
}