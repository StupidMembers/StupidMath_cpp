#include "stupid_math.h"
#include "iostream"
using namespace stupid_math;
int main()
{
    hello();
    std::cout << (isPrime(7) ? "true" : "false") << std::endl;
    try
    {
        std::cout << lastPrime(-1) << std::endl;
    } catch (const  char * msg)
    {
        std::cout << msg << std::endl;
    }
    std::cout << fibonacci(1200);
    return 0;

}
