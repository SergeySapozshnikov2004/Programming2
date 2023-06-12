#include <iostream>
#include <Piquet.h>
#include <string>

class Limitation
{
protected:
    double value;
    Piquet start;
    Piquet end;
public:
    Limitation(double value,const Piquet& start,const Piquet& end);

    virtual ~Limitation() = 0;
    virtual std::string ToString();
};
