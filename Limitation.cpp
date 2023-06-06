#include <Piquet.h>
#include <iostream>

std::string ToString(const Piquet &piquet)
{
    return (piquet.number < 0 ? "(ПК 0": "(ПК ") + std::to_string(piquet.number) + "+" + std::to_string(piquet.shift) + ")";   
}