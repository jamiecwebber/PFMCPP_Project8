#pragma once

#include "Vehicle.h"

struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& s);
    void speedUp();
    void tryToEvade() override;
};
