#include "stupid_math.h"
#include "iostream"
#include <ctime>
#pragma GCC optimize(2)
using namespace stupid_math;
using namespace std;
int main()
{
    clock_t start, end;
    hello();
    std::cout << (isPrime(7) ? "true" : "false") << std::endl;
    try
    {
        std::cout << lastPrime(-1) << std::endl;

    } catch (const char *msg)
    {
        std::cout << msg << std::endl;
    }
    try
    {
        std::cout << fibonacci(100) << std::endl;
    } catch (const char *msg)
    {
        std::cout << msg << std::endl;
    }

//    std::cout << std::fixed << fast_fibonacci(350) << std::endl;
//    std::cout << buffon_needle(10);

    std::cout << toFixedString(fast_fibonacci(80)) << endl;
    start = clock();
    std::cout << get_PI((unsigned int)1000000000) << std::endl;
    cout << (double)(clock() - start) / CLOCKS_PER_SEC << "s" << endl;

    return 0;

}
