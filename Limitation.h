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


    virtual std::string ToString();
    friend std::ostream& operator<<(std::ostream& ostream, const Limitation& limitation);
    friend std::istream& operator>>(std::istream& ostream, Limitation& limitation);

};