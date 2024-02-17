#include <iostream>

using namespace std; 
  
int main() 
{ 
    int a = 10, b = 20, c = 30; 
  
    cout << "The Greatest Among Three Numbers is : "; 
  
    //Less readable due to number of conditions
    if(a >= b)
    {
        if(a >= c)
        {
            cout << a << endl;
        } else {
            cout << c << endl;
        }
    } else if( b >= c)
    {
        cout << b << endl;
    } else {
        cout << c << endl;
    }
  
    return 0; 
}