#include "bull.h"

Bull::Bull(int weight, int liftCapacity, std::string name)
{
    set_weight(weight);
    set_capacity(liftCapacity);
    set_name(name);
}

void Bull::set_name(std::string name)
{
    this->name = name;
}

std::string Bull::to_string(void)
{
    return "Bulldozer " + name;
}

void Bull::set_weight(int weight)
{
    this->weight = weight;
}

void Bull::set_capacity(int liftCapacity)
{
    this->liftCapacity = liftCapacity;
}
