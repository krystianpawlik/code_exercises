// C++ program to print all prime number smaler or equel then number. 
#include <iostream>

bool isPrime(int number) {
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

void printPrimes(int number){
  for(int i = 2; i <= number; ++i)
  {
    if( isPrime(i))
    {
      std::cout << i << std::endl;
    }
  }
}


int main()
{
    printPrimes(6);
    return 0;
}