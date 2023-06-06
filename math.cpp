#include <cmath>
#include <limits>
#include "math.h"

bool is_eq(double lha, double rha) {
    return abs(lha - rha) < std::numeric_limits<double>::epsilon();
}