//
//  digits.cpp
//  lab-vars
//
//  Created by Caleb Thomas on 8/29/16.
//  Copyright © 2016 Caleb Thomas. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

void printDigits(int x)
{
   int place = 1;
   while(x % place != x)
   {
      cout << place << "'s digit is: ";
      cout << x % (place * 10) / place << endl;
      place *= 10;
   }
}

void otherPrintDigits(int x)
{
   int place = 1;
   do
   {
      cout << place << "'s digit is: ";
      cout << x % 10 << endl;
      place *= 10;
      x /= 10;

   }while(x != 0);
   
}

int main()
{
   // Declare Variables
   int x;
   
   // Gather Data
   cin >> x;
   
   // Calculate
   /*
   hundreds = x / 100 * 100;
   tens = x % 100 / 10  * 10;
   ones = x % 10;
   
   cout << hundreds << endl << tens << endl << ones << endl;
   */
   otherPrintDigits(x);
   
   return 0;
}
