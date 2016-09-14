#include <iostream>
#include <cmath>

/* Author: Caleb Thomas
 * Program: compute_sin
 * Description: Reads a number x from input, an angle in radians. 
 *    Computes an approximation to sin(x) using an 4th-order Taylor series.
 */

using namespace std;

int fact(int); // declares a function the skeleton defines for you.

int main(int argc, char *argv[])
{
   // Declare any variables you need here
   double  x;
   int sign;
   double sum = 0;
   double numerator, denominator;
   
   // Prompt the user
   cout << "Enter x in radians:  ";
   
   // get input
   cin >> x;
   
   // Do some operations
   for(int i = 0; i < 4; i++)
   {
      numerator = pow(x, (double)2 * i + 1);
      denominator = fact(2 * i + 1);
      sign = (int)pow(-1.0, (double)i);
      
      sum += sign * numerator / denominator;
      cout << i << " " << sign << " " << numerator << " " << denominator << endl;
   }
   
   
   
   // Print the result to the user
   cout << sum << endl;
   
   // You're done
   return 0;
   
}

// here's the actual definition of fact, declared earlier.
int fact(int n)
{
   int result = 1;
   for (int i = 1; i <= n; i++) {
      result = result * i;
   }
   return result;
}

