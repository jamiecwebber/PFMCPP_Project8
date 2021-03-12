#include "SemiTruck.h"

#include <iostream>

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}

void SemiTruck::speedUp()
{
    setSpeed(100);
    std::cout << name << ": getting this semi-truck up to speed!" << std::endl;
}

void SemiTruck::tryToEvade()
{
    setSpeed(0);
    std::cout << name << " just pulled their truck over" << std::endl;
}

