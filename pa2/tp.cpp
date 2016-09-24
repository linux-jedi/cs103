/*********************************************************
 * File name : tp.cpp
 * Author    : Caleb Thomas (calebtho@usc.edu)
 * Date      : 9/19/16
 * Purpose   : Simulates the toilet-paper problem
 * Notes     : None
 *********************************************************/

#include <iostream>   // Basic I/O => cin, cout, etc.
#include <cstdlib>    // Other helpful functions => rand(), RANDMAX

using namespace std;

// Prototype/declaration of a function that returns a
// uniform random number between [0,1]
double rand_uniform();

// Prototype/declaration of a function that will perform a single
// simulation of two rolls of paper and users
// Returns the number of squares left on the non-empty roll
int single_sim(int N, double p);

int main(int argc, char *argv[])
{
  int N;                // initial number of squares on each roll

  double p;             // probability of a big-chooser

  int sims;             // number of trials for our simulation


  // Add your code here
  // Seed Random Number Generator
   srand(time(0));
   
   double sum = 0;
   
  // Gather input
   cin >> N >> p >> sims;
   
   // Run Simulatins
   for(int i = 0; i < sims; i++)
   {
      sum += single_sim(N, p);
   }
   
   // Calculate and Output the average remaining number of squares
   cout << "Average: " << sum / sims << endl;

  // Be sure you produce an output of the form:
  //    Average: 1.2314
  // where the number is the correct average
  return 0;
}

// return the number of squares on the non-empty roll
//  for this simulation of the problem
int single_sim(int N, double p)
{
   int roll1 = N;
   int roll2 = N;
   
   bool isBigUser;
   
   while(roll1 != 0 && roll2 != 0)
   {
      isBigUser = rand_uniform() <= p ? true : false;   // Determine big or little user
      
      if(isBigUser)
      {
         // Substract a square from bigger roll
         if(roll1 >= roll2)
         {
            roll1--;
         }
         else
         {
            roll2--;
         }
      }
      else
      {
         // Substract a square from the smaller roll
         if( roll1 <= roll2)
         {
            roll1--;
         }
         else
         {
            roll2--;
         }
      }
   }
   
   return roll1 == 0 ? roll2 : roll1;
}

// returns a uniformly-distributed number in the range [0,1]
//  The caller can use the return result to then determine
//  if it should treat it as a big- or little-chooser by 
//  also using the p parameter.  This code only needs to 
//  produce a random number in the range [0,1]
double rand_uniform()
{
   return rand() / (double)RAND_MAX;
}
