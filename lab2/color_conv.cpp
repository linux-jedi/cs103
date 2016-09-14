#include <iostream>
#include <algorithm>


/* Author: Caleb Thomas
 * Program: compute_sin
 * Description: Reads red, green, and blue values for a color from standard
 * input and outputs the CYMK equivalent
 */

using namespace std;

int main()
{
   // Declare Variables
   int red, green, blue;
   double white, cyan, yellow, magenta, black;
   
   // Get Values
   cin >> red >> green >> blue;
   
   // Do calculations
   white = max(max(red, green), blue) / 255.0;
   cyan = (white - red / 255.0) / white;
   magenta = (white - green / 255.0) / white;
   yellow = (white - blue / 255.0) / white;
   black = 1 - white;
   
   // Output
   cout << "Cyan: " << cyan << endl;
   cout << "Magenta: " << magenta << endl;
   cout << "Yellow: " << yellow << endl;
   cout << "Black: " << black << endl;
   
   return 0;
}
