#include <iostream>
#include <algorithm>
using namespace std; 
  
int main() 
{ 
    int a = 10, b = 20, c = 30; 
  
    cout << "The Greatest Among Three Numbers is : " << std::max({a, b, c}) << endl; // c++11

    return 0; 
}