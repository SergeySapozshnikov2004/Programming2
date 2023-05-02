#include <string>

class Curve
{
private:
    double radius;
    int start;
    int end;
public:

    /**
     * @brief Получает данные 
     * 
     */
    Curve(const double radius, const int start,const int end);
};