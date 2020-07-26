//
// Created by 风晨电 on 2020/7/25.
//
#include "cmath"
#include "string"
#ifndef STUPIDMATH_STUPID_MATH_H
#define STUPIDMATH_STUPID_MATH_H


namespace stupid_math
{
    #define PI 3.14159265358979323846
    static const double sqrt_5 = std::sqrt(5);

    std::string toFixedString(double x);

    void hello();

    bool isPrime(long long N);

    long long nextPrime(long long N);

    long long lastPrime(long long N);

    bool *eratosthenes(long long Nmax);

    unsigned long long fibonacci(unsigned long long N);

    double fast_fibonacci(int N);

    double buffon_needle(unsigned long long N) noexcept ;

    double get_PI(unsigned long long N) noexcept ;

    double buffon_needle(unsigned int N) noexcept ;

    double get_PI(unsigned int N) noexcept ;
}
#endif //STUPIDMATH_STUPID_MATH_H
