#include <Piquet.h>
#include <iostream>
#include "Limitation.h"

Limitation::Limitation(double value, const Piquet& start, const Piquet& end)
    : value(value), start(start), end(end)
{}

Limitation::~Limitation()
{}

std::string Limitation::ToString()
{}