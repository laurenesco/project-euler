//
// Program name:      Largest_Prime_Factor_Problem3.cpp
// Last Modified:     06/08/2022
// Last Modified By:  Lauren Escobedo
// Problem:           The prime factors of 13195 are 5, 7, 13 and 29.
//                    What is the largest prime factor of the number 600851475143 ?
//

#include <iostream>
#include <math.h>

using namespace std;

unsigned primeFactorFinder(unsigned number);

int main()  {

  // Variable declarations
  unsigned number, factor;

  // Setting number
  cout << "Enter the number for which you want to find the largest prime factor: ";
  cin >> number;
  cout << endl;

  factor = primeFactorFinder(number);

  cout << "Largest prime factor: " << factor;

  return 0;
}

unsigned primeFactorFinder(unsigned number) {
  bool prime = false;
  unsigned factor;

  while(!prime) {
    for(int i=number-1; i>0; i--) {
      bool evenDivisibilityFlag = false;
      // If the number is evenly divisble, it is a factor so move forward with algorithm
      if(number%i == 0) {
        factor = i;

        // Prime number checker, if not prime (evenly divides) break immediately
        for(unsigned i=2; i<factor; i++) {
          if(factor%i == 0) {
            evenDivisibilityFlag = true;
            break;
          }
        }
        if(evenDivisibilityFlag == false) {
          prime = true;
          break;
        }
      }
    }
  }
  return factor;
}
