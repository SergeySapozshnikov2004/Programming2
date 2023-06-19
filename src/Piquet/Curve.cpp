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

void Curve::setRadius(const double value)
{
    this->value=value;
}

void Curve::setStart(const Piquet& start)
{
    this->start=start;
}

void Curve::setEnd(const Piquet& end)
{
    this->end=end;
}

std::ostream& operator<<(std::ostream& ostream, const Curve& curve)
{
    return ostream << curve.ToString()
        << ", start=" << curve.getStart()
        << ", end=" << curve.getEnd()
    << ")";
}

std::istream& operator>>(std::istream& istream, Curve& curve)
{
    double radius;
    Piquet start;
    Piquet end;
    istream >> radius >> start >> end;

}
