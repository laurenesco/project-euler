//
// Program name:      Largest_Prime_Factor_Problem3.cpp
// Last Modified:     06/08/2022
// Last Modified By:  Lauren Escobedo
// Problem:           The prime factors of 13195 are 5, 7, 13 and 29.
//                    What is the largest prime factor of the number 600851475143 ?
//

#include <iostream>

using namespace std;

int main()  {

  // Variable declarations
  unsigned number, factor;
  bool prime = false;

  // Setting number
  cout << "Enter the number for which you want to find the largest prime factor: ";
  cin >> number;
  cout << endl;

  while(!prime) {
    // Find next largest factor, starting from the number and working backward for efficiency
    for(int i=number-1; i>0; i--) {
      bool flag = false;

      // If the number is evenly divisble, it is a factor so move forward with algorithm
      if(number%i == 0) {
        factor = i;
        // cout << "Factor loop: " << factor << endl; //------------------------Debugging line

        // Prime number checker, if not prime break immediately
        for(unsigned i=2; i<factor; i++) {
          if(factor%i == 0) {
            // cout << "Prime loop: not prime " << prime << endl;//-------------Debugging line
            flag = true;
            break;
          }
        }
        // End of prime number checker
        if(flag == false) {
          prime = true;
          break;
        }
      }
    }
  }

  cout << "Largest prime factor: " << factor;



  return 0;
}
