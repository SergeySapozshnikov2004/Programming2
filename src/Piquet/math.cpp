#include <cmath>
#include <limits>
#include "math.h"

bool miit::math::is_eq(const double lha,const double rha)
{
    return std::abs(lha - rha) < std::numeric_limits<double>::epsilon();
}
