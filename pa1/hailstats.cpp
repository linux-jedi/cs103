//
//  Caleb Thomas
//  calebtho@usc.edu
//
//  Program Description: Takes two numbers to form an interval. Determines maximum
//                       and minimum number of steps by numbers in the interval.


#include <iostream>
#include <climits>

using namespace std;

// Prototypes
void printHailStats(int, int);
int getHailstoneLength(int);

int main()
{
   // Declare Variables
   int x, y;
   
   // Get Input
   cout << "Please enter two integers: ";
   cin >> x >> y;
   
   // Check for invalid ranges
   if(x > y)
   {
      cout << "Invalid Range" << endl;
   }
   else
   {
      // Hail Stats
      printHailStats(x, y);
   }
   
   return 0;
}


void printHailStats(int x, int y)
{
   int maxNum, minNum;
   int maxVal = 0;
   int minVal = INT_MAX;
   
   // Loop through range of values to determine max and mins
   for(int i = x; i <= y; i++)
   {
      int hailLength = getHailstoneLength(i);
      
      if(hailLength > maxVal)
      {
         maxVal = hailLength;
         maxNum = i;
      }
      if(hailLength < minVal)
      {
         minVal = hailLength;
         minNum = i;
      }
   }
   
   cout << "Minimum Length: " << minVal << endl;
   cout << "Achieved By: " << minNum << endl;
   cout << "Maximum Length: " << maxVal << endl;
   cout << "Achieved By: " << maxNum << endl;
}

int getHailstoneLength(int x)
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
      
      counter++;
   }
   
   return counter;
}
