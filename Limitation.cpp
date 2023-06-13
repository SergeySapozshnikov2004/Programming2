#include <Piquet.h>
#include <iostream>
#include "Limitation.h"
#include <sstream>

Limitation::Limitation(double value, const Piquet& start, const Piquet& end)
    : value(value), start(start), end(end)
{}

Limitation::~Limitation()
{}

std::string Limitation::ToString()
{
    std::stringstream buffer;
    buffer << *this;
    return buffer.str();
}

std::ostream& operator<<(std::ostream& ostream, const Limitation& limitation)
{
    return ostream << "(Limitation, value=" << limitation.value
        << ", start=" << limitation.start
        << ", end=" << limitation.end
    << ")";
}

std::istream& operator>>(std::istream& istream, Limitation& limitation)
{
    istream >> limitation.value >> limitation.start >> limitation.end;
}