#include "sellable.h"

Sellable::Sellable(double price):price(price){}

void Sellable::sell()const
{
    std::cout << "Sold for $" << price << std::endl;
}

Sellable::~Sellable(){}