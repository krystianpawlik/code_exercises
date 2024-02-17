#include <iostream>
#include <cctype>

int main()
{
    char ch = 'c';
    
    if (isalpha(ch))
    {
        std::cout << ch << " is an alphabet." << std::endl;
    } else
    {
        std::cout << ch << " is not an alphabet." << std::endl;
    }

    return 0;
}