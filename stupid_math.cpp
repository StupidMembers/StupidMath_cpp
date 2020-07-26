//
// Created by 风晨电 on 2020/7/25.
//


#include "stupid_math.h"
#include <iomanip>

namespace stupid_math
{
    std::string toFixedString(double x)
    {
        std::ostringstream ostringstream;
        ostringstream << std::setprecision(15) << x;
        return ostringstream.str();
    }
}
