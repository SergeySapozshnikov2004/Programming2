#pragma once
#include <string>

class Piquet final
{
private:
    int number;
    double lenght;
    double shift;
public:
    
    Piquet();

    /**
     * @brief Считает длинну пикета, его номер и смещение 
     * 
     */
    Piquet(const int number, const double shift, const double lenght = 100);

    /**
     * @brief Проверяет равна ли длинна 100 метрам
     * @param lenght длинна пикета
     * @return true когда lenght = 100 метров
     * @return false когда lenght != 100 метров
     */
    bool IsStandart() const;
    
    /**
     * @brief Переводит пикет и смещение в строку
     * 
     * @return std::string пикет и смещение в виде строки
     */
    std::string ToString() const;

    friend std::istream& operator>>(std::istream& istream, Piquet& piquet);
    friend std::ostream& operator<<(std::ostream& ostream, const Piquet& piquet);
    friend bool operator==(const Piquet& lha, const Piquet& rha);
    friend bool operator!=(const Piquet& lha, const Piquet& rha);
};
