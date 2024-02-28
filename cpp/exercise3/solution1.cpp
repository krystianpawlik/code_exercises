// C++ program to check if a number is prime 
#include <iostream>
#include <cctype>


bool is_prime(int number) {
  if (number <= 1) {
    return false;
  }

  if (number % 2 == 0 && number != 2) {
    return false; // Handle even numbers except 2
  }

  for (int i = 3; i * i <= number; i+=2) {
    if (number % i == 0) {
      return false;
    }
  }

  return true;
}

int main()
{
    std::cout << is_prime(6)<<std::endl;
    return 0;
}