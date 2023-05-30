#include <string>
#include <Piquet.h>

class Curve
{
private:
    double radius;
    Piquet start;
    Piquet end;
public:

    /**
     * @brief Получает данные 
    //  * 
     */
    Curve(const double radius, const Piquet start,const Piquet end);

        /**
     * @brief Переводит пикет и смещение в строку
     * 
     * @return std::string пикет и смещение в виде строки
     */
    friend std::string ToString(const Curve& curve);
    friend std::string ToString(const Curve* curve);
    friend std::string ToString(Curve* curve);


    friend std::ostream& operator<<(std::ostream& ostream, Curve& curve);
};