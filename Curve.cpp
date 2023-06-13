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
    return std::string();
}

