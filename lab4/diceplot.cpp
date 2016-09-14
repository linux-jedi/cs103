//
//  diceplot.cpp
//  lab-arrayfunc
//
//  Description: Plots distribution of n trials of the sum of 4 six sided dice rolls
//
//  Created by Caleb Thomas on 9/12/16.
//  Copyright © 2016 Caleb Thomas. All rights reserved.
//

#include <iostream>

#include <cstdlib>

using namespace std;

int roll();
int performExperiment();
void printHistogram(int counts[]);

int main()
{
   srand(time(0));
   
   int counts[21];
   int numOfExperiments;
   
   for(int i = 0; i < 21; i++)
   {
      counts[i] = 0;
   }
   
   cout << "How many experiments do you wish to run? ";
   cin >> numOfExperiments;
   
   for( int i = 0; i < numOfExperiments; i++)
   {
      int fourRolls = performExperiment();
      // Shift index down: roll() range: 4-24 array range: 0-20
      counts[fourRolls - 4] += 1;
   }
   
   printHistogram(counts);
}

int roll()
{
   return (rand() % 6) + 1;
}

int performExperiment()
{
   return roll() + roll() + roll() + roll();
}

void printHistogram(int counts[])
{
   for(int i = 0; i < 21; i++)
   {
      cout << i+4 << ": ";
      for(int j = 0; j < counts[i]; j++)
      {
         cout << "X";
      }
      cout << endl;
   }
}