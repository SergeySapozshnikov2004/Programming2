#include <Piquet.h>
#include <string>


class Limitation
{
private:

    Piquet number;
    Piquet shift;

public:

    std::string ToString(const Piquet& number, const Piquet& shift);

};
