#include <sstream>
#include <iostream>
#include <cmath>
#include <limits>
#include "Piquet.h"
#include "math.h"

Piquet::Piquet(int number, double shift, double lenght) : number(number), shift(shift), lenght(lenght)
{}

bool Piquet::IsStandart() const
{
    return is_eq(lenght, 100);
}

std::istream& operator>>(std::istream &istream, Piquet &piquet)
{
    return istream >> piquet.lenght >> piquet.shift;
}

std::ostream& operator<<(std::ostream &ostream, const Piquet &piquet)
{
    return ostream << piquet.ToString();
}

bool operator==(const Piquet &lha, const Piquet &rha)
{
    return lha.number == rha.number && is_eq(lha.shift, rha.shift);
}

bool operator!=(const Piquet &lha, const Piquet &rha)
{
    return not operator==(lha, rha);
}

std::string Piquet::ToString() const
{
    std::stringstream buffer;

    buffer << "(ПК ";
    if (is_eq(this->lenght, 0))
        buffer << "0";
    buffer << this->number << this->shift << ")";

    return buffer.str(); 
}