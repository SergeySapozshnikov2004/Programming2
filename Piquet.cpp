#include <iostream>
#include "Piquet.h"

Piquet::Piquet(int number, double shift): number(number), shift(shift)
{}

bool Piquet::IsStandart()const
{
    return lenght == 100;
}

std::string ToString(const Piquet &piquet)
{
    return (piquet.number < 0 ? "(ПК 0": "(ПК ") + std::to_string(piquet.number) + "+" + std::to_string(piquet.shift) + ")";   
}

std::istream& operator>>(std::istream &istream, Piquet &piquet)
{
    return istream >> piquet.lenght >> piquet.shift;
}

std::ostream& operator<<(std::ostream &ostream, Piquet &piquet)
{
    return ostream << ToString(piquet);
}

bool operator==(const Piquet &lha, const Piquet &rha)
{
    return lha.lenght == lha.lenght && rha.shift == rha.shift;
}

bool operator!=(const Piquet &lha, const Piquet &rha)
{
    return not operator==(lha, rha);
}
