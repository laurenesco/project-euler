//
// Program name:      Largest_Palindrome_Problem4.cpp
// Last Modified:     06/08/2022
// Last Modified By:  Lauren Escobedo
// Problem:           A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
//                    Find the largest palindrome made from the product of two 3-digit numbers.
//

#include <iostream>

using namespace std;

#define UPPER_LIMIT 999;
#define LOWER_LIMIT 100;

int main()  {
  int palindrome;
  int upperLimit = UPPER_LIMIT;
  int lowerLimit = LOWER_LIMIT;
  int multiplicand, multiplier, product,temp;

  for(int i=upperLimit; i>lowerLimit; i--)  {
    multiplicand = i;
    // cout << "loop 1" << endl;
    for(int j=upperLimit; j>lowerLimit; j--)  {
      int digit;
      int reverse = 0;
      // cout << "loop 2" << endl;
      multiplier = j;
      product = multiplicand*multiplier;
      temp = product;
      //create reverse of number
      while(temp > 0) {
        // cout << "loop 3" << endl;
        digit = temp%10;
        reverse = reverse*10;
        reverse += digit;
        temp /= 10;
        palindrome = reverse;
      }
      cout << "Product = " << product << endl;
      cout << "Reverse = " << palindrome << endl;
      cout << "--------------------" << endl;
      if(product == palindrome) {
        break;
      }
    }
    if(product == palindrome) {
      break;
    }
  }

  cout << palindrome << " Multiplicand: " << multiplicand << " Multiplier: " <<  multiplier;

  return 0;
}
