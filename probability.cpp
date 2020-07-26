//
// Created by 风晨电 on 2020/7/25.
//
#include "stupid_math.h"
#include <random>
#include <ctime>

namespace stupid_math
{
    double buffon_needle(unsigned long long N) noexcept
    {
//        double a = 2;
//        double l = a / 2;
//        double l_half = l / 2;

        double x_uniform;
        double angle;
        static const double converter =  PI / 180;

        unsigned long long count = 0;

        std::default_random_engine generator(std::time(nullptr) + 1);
        // width = 2
        // l = 1 = width / 2
        // x = 0 ~ 1
        // x <= 0.5 * sin(phi)
        // x_uniform <= sin(phi)    =>   x_uniform = 0 ~ 2
        std::uniform_real_distribution<double> uniform_distribution(0, 1);
//        std::uniform_real_distribution<double> angle_distribution(0, 90);

        for (unsigned long long i = 0; i < N; i++)
        {
            x_uniform = uniform_distribution(generator) * 2;
            angle = uniform_distribution(generator) * 90;
            if (x_uniform <= sin(angle * converter))
            {
                count++;
            }
        }
        return (double) count / (double) N;
    }

    double buffon_needle(unsigned int N) noexcept
    {
        double x_uniform;
        double angle;
        static const double converter =  PI / 180;

        unsigned int count = 0;

        std::default_random_engine generator(std::time(nullptr) + 1);
        // width = 2
        // l = 1 = width / 2
        // x = 0 ~ 1
        // x <= 0.5 * sin(phi)
        // x_uniform <= sin(phi)    =>   x_uniform = 0 ~ 2
        std::uniform_real_distribution<double> uniform_distribution(0, 1);
//        std::uniform_real_distribution<double> angle_distribution(0, 90);

        for (unsigned int i = 0; i < N; i++)
        {
            x_uniform = uniform_distribution(generator) * 2;
            angle = uniform_distribution(generator) * 90;
            if (x_uniform <= sin(angle * converter))
            {
                count++;
            }
        }
        return (double) count / (double) N;
    }

    double get_PI(unsigned long long N) noexcept
    {
        return 1.0 / buffon_needle(N);
    }

    double get_PI(unsigned int N) noexcept
    {
        return 1.0 / buffon_needle(N);
    }
}

