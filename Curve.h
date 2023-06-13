#pragma once
#include <string>
#include <Piquet.h>
#include "Limitation.h"

class Curve final : public Limitation
{
public:
    /**
     * @brief Получает данные 
     * 
     */
    Curve(const double radius, const Piquet& start, const Piquet& end);

    double getRadius() const;
    Piquet getStart() const;
    Piquet getEnd() const;

    std::string ToString();
};