#include <sstream>
#include <iostream>
#include "Curve.h"
#include "Piquet.h"
#include "math.h"

Curve::Curve(const double radius, const Piquet& start, const Piquet& end) : Limitation(radius, start, end)
{}

double Curve::getRadius() const
{
    return this->value;
}

Piquet Curve::getStart() const
{
    return this->start;
}

Piquet Curve::getEnd() const
{
    return this->end;
}

std::string Curve::ToString()
{
    std::stringstream buffer;

    buffer << *this;
    return buffer.str();
}

std::ostream& operator<<(std::ostream& ostream, const Curve& curve)
{
    return ostream << "(Curve, radius=" << curve.getRadius()
        << ", start=" << curve.getStart()
        << ", end=" << curve.getEnd()
        << ")";
}

std::istream& operator>>(std::istream& istream, Curve& curve)
{
    istream >> curve.value >> curve.start >> curve.end;
}