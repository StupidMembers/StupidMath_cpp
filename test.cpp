#include "stupid_math.h"
#include "iostream"
using namespace stupid_math;
int main()
{
    hello();
    std::cout << (isPrime(7) ? "true" : "false") << std::endl;
    try
    {
        std::cout << lastPrime(-1);
    } catch (const  char * msg)
    {
        std::cout << msg;
    }
    return 0;

}
