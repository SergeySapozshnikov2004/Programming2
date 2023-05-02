#include <string>

class Piquet
{
private:
    int number;
    int lenght;
    double shift;
public:
    
    /**
     * @brief Считает пикет и смещение 
     * 
     */
    Piquet(const int number,const double shift);

    /**
     * @brief Проверяет равна ли длинна 100 метрам
     * 
     * @param lenght длинна пикета
     * @return true когда lenght = 100 метров
     * @return false когда lenght != 100 метров
     */
    bool IsStandart()const;
    
    /**
     * @brief Переводит пикет и смещение в строку
     * 
     * @return std::string пикет и смещение в виде строки
     */
    friend std::string ToString(const Piquet& piquet);

    friend std::istream& operator>>(std::istream& istream, Piquet& piquet);
    friend std::ostream& operator<<(std::ostream& ostream, Piquet& piquet);
    friend bool operator==(const Piquet& lha, const Piquet& rha);
    friend bool operator!=(const Piquet& lha, const Piquet& rha);
};
