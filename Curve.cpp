#include <iostream>
#include "Curve.h"

Curve::Curve(double radius, double start, double end): radius(radius), start(start), end(end)
{}

std::string ToString(const Curve &curve)
{
    return (curve.radius < 0 ? "(ПК 0": "(ПК ") + std::to_string(curve.start) + "+" + std::to_string(curve.end) + ")";   
}

std::ostream& operator<<(std::ostream &ostream, Curve &curve)
{
    return ostream << ToString(curve);
}
