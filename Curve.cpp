#include <iostream>
#include "Curve.h"
#include "Piquet.h"

Curve::Curve(const double radius,const Piquet start,const Piquet end): radius(radius), start(start), end(end)
{}

std::string ToString(const Curve &curve)
{
    return (curve.radius < 0 ? "(ПК 0": "(ПК ") + ToString(curve.start) + "+" + ToString(curve.end) + ")";   
}

std::ostream& operator<<(std::ostream &ostream, Curve &curve)
{
    return ostream << ToString(curve);
}