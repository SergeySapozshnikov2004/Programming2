#include <iostream>
#include <Piquet.h>
#include <string>

class Limitation
{
protected:
    double dimension;
    Piquet start;
    Piquet end;
public:
    Limitation(double dimension, Piquet start, Piquet end);

    virtual ~Limitation();
    virtual std::string ToString();
};
