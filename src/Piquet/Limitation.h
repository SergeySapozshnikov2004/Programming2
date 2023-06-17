#ifndef F0658F36_0998_4350_9697_3595BB8E4D57
#define F0658F36_0998_4350_9697_3595BB8E4D57
#include <string>
#include <iostream>
#include "Piquet.h"

class Limitation
{
protected:

    double value;
    Piquet start;
    Piquet end;  
    Limitation(double value,const Piquet& start,const Piquet& end);

public:   

    virtual ~Limitation() = 0;
    virtual std::string ToString() const;
};


#endif /* F0658F36_0998_4350_9697_3595BB8E4D57 */

