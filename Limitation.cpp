#include <Piquet.h>
#include <iostream>
#include "Limitation.h"

Limitation::Limitation(double dimension, Piquet start, Piquet end)
    : dimension(dimension), start(start), end(end)
{}

Limitation::~Limitation()
{}

std::string Limitation::ToString()
{}