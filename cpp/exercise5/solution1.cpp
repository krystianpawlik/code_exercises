// C program that will fail to compile in C++ with -Werror options.
// gcc solution1.cpp -pedantic -Werror  #should fail
// gcc -x c solution1.cpp # should pass

#include <stdio.h>

int main() {
  int n = 10;
  int array[n]; // Variable size array

  for (int i = 0; i < n; i++) {
    array[i] = i;
  }
  for (int i = 0; i < n; i++) {
    printf("%d ", array[i]);
  }

  return 0;
}

