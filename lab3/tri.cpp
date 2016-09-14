//
//  tri.cpp
//  lab-controls
//
//  Program Description: Prints a triangle generated by user inputted angle
//
//  Created by Caleb Thomas on 9/6/16.
//  Copyright © 2016 Caleb Thomas. All rights reserved.
//

#include <cmath>
#include <iostream>
#include <string>

using namespace std;

void printIsocelesRight();
void printTriByAngle(int);

int main()
{
   int theta;
   
   cout << "Enter the angle theta in degrees: ";
   cin >> theta;
   
   printTriByAngle(theta);
   
   return 0;
}

void printIsocelesRight()
{
   for(int row = 0; row < 31; row++)
   {
      for(int col = 0; col <= row; col++)
      {
         cout << "*";
      }
      cout << endl;
   }
}

void printTriByAngle(int angle)
{
   // Initiliaze variables
   double angleRadians;
   int height = 31;
   int width;
   
   // Convert angle to radians
   angleRadians = angle * M_PI / 180;
   
   // Calculate max width
   width = (int)floor((height * tan(angleRadians)));
   
   // Draw the triangle
   for(int row = 0; row <= 30; row++)
   {
      int num = (int)floor((row + 1) * tan(angleRadians));
      if( num >= 20 && num <= 30)
      {
	num = 20;
      }
      /*if(num >= 20 && num <= 30)
      {
         cout << string(20, '*') << endl;
      }
      else
      {
         cout << string(num, '*') << endl;
      }
      */
      for(int col = 0; col < num; col++)
      {
          cout << '*';
      }
      cout << endl;
   }
}