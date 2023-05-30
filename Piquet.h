#include <string>

   /**
     * @brief сравнивает два double
     * @param x первый double
     * @param y второй double
     * @return true когда равенство
     * @return false когда неравенство
     */
bool is_equal(double x, double y);

class Piquet
{
private:
    int number;
    double lenght;
    double shift;
public:
    
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
    friend std::string ToString(const Piquet& piquet);
    friend std::string ToString(const Piquet* piquet);
    friend std::string ToString(Piquet* piquet);

    friend std::istream& operator>>(std::istream& istream, Piquet& piquet);
    friend std::ostream& operator<<(std::ostream& ostream, const Piquet& piquet);
    friend bool operator==(const Piquet& lha, const Piquet& rha);
    friend bool operator!=(const Piquet& lha, const Piquet& rha);
};
