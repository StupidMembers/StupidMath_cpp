#include "stupid_math.h"

#include <iostream>
#include "cmath"

namespace stupid_math
{
    static double sqrt_5 = std::sqrt(5);

    void hello()
    {
        std::cout << "Hello, World!" << std::endl;
    }

    bool isPrime(long long N)
    {
        // O(√n/3)
        // 常规算法，在2.5 x 10⁷次后MR校验优于本算法
        if (N <= 3)
        {
            if (N <= 1)
            {
                return false;
            }
            if (N == 2 || N == 3)
            {
                return true;
            }
        }
        if (N % 2 == 0 || N % 3 == 0)
        {
            return false;
        }
        auto floor = (long long) std::floor(sqrt((double) N));
        for (long long i = 5; i <= floor; i += 6)
        {
            if (N % i == 0 || N % (i + 2) == 0)
            {
                return false;
            }
        }
        return true;
    }

    long long nextPrime(long long N)
    {
        if (N <= 1)
        {
            return 2;
        }
        long long i = N + 1;
        for (;; i++)
        {
            if (isPrime(i))
            {
                return i;
            }
            if (i % 6 == 5)
            {
                break;
            }
        }
        for (long long k = i + 2;; k += 6)
        {
            if (isPrime(k))
            {
                return k;
            } else if (isPrime(k + 4))
            {
                return k + 4;
            }
        }
    }

#pragma clang diagnostic push
#pragma ide diagnostic ignored "hicpp-exception-baseclass"

    long long lastPrime(long long N)
    {
        if (N <= 2)
        {
            throw "there is no proper number!";
        }
        long long i = N - 1;
        for (; i > 0; i--)
        {
            if (isPrime(i))
            {
                return i;
            }
            if (i % 6 == 1)
            {
                break;
            }
            if (i <= 1)
            {
                throw "there is no proper number!";
            }
        }
        for (long long k = i - 6; k > 0; k -= 6)
        {
            if (isPrime(k))
            {
                return k;
            } else if (isPrime(k + 4))
            {
                return k + 4;
            } else if (k <= 1)
            {
                throw "there is no proper number!";
            }
        }
        throw "there is no proper number!";
    }

    bool *eratosthenes(long long Nmax)
    {
        bool *isPrime = new bool[Nmax + 1]();
        for (long long i = 3; i <= Nmax; i += 2)
        {
            isPrime[i] = true;
        }
        isPrime[2] = true;
        long long floor = std::sqrt(Nmax);
        for (long long i = 3; i <= floor; i += 2)
        {
            if (isPrime[i])
            {
                long long interval = 2 * i;
                for (long long j = i * i; j <= Nmax; j += interval)
                {
                    isPrime[j] = false;
                }
            }
        }
        long long num = 0;
        for (long long i = 1; i <= Nmax; i++)
        {
            if (isPrime[i])
            {
                num++;
            }
        }
        return isPrime;
    }

    // 会溢出
    unsigned long long fibonacci(unsigned long long N)
    {
        unsigned long long pre = 0;
        unsigned long long now = 1;
        unsigned long long temp;
        if (N >= 0)
        {
            if (N == 0)
            {
                return 0;
            }
            for (unsigned long long i = 2; i <= N; i++)
            {
                temp = now;
                now += pre;
                pre = temp;
                if (now < pre)
                {
                    throw "overflow";
                }
            }
            return now;
        } else
        {
            throw "number < 0";
        }
    }


    double fast_fibonacci(long long N)
    {

        return ceil((double)((pow((1 + sqrt_5) / 2, N) - pow((1 - sqrt_5) / 2, N)) / sqrt_5));
    }
}