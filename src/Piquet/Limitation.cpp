#include "Piquet.h"
#include <iostream>
#include "Limitation.h"
#include <sstream>

Limitation::Limitation(double value, const Piquet& start, const Piquet& end)
    : value(value), start(start), end(end)
{}

Limitation::~Limitation()
{}

std::string Limitation::ToString() const
{

    std::stringstream buffer;
    buffer << "(Limitation, value=" << this->value
        << ", start=" << this->start
        << ", end=" << this->end
    << ")";
    return buffer.str();
}

std::ostream& operator<<(std::ostream& ostream, const Limitation& limitation)
{
    return ostream << limitation.ToString();
}