//
// Program name:      Even_Fibonacci_Numbers_Problem2.cpp
// Last Modified:     06/07/2022
// Last Modified By:  Lauren Escobedo
// Description:       Problem 2 of Project Euler
//


#include <iostream>

using namespace std;

int main()  {

  // Variable declarations
  int first = 1;
  int second = 2;
  int third = 0;
  unsigned sum = 0;

  // Fibonnaci sequence execution
  while(third < 4000000)  {
    third = first + second;
    first = second;
    second = third;

    // Check if the number is even, if so, add to sum
    if(first%2 == 0)  {
      sum += first;
    }
}

  // Check the final number, and if even, add to sum
  if(second%2 ==0)  {
    sum += second;
  }

  // Print the sum
  cout << endl << sum << endl;

  return 0;
}
