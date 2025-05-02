#include "rentable.h"

Rentable::Rentable(double dailyRate) : dailyRate(dailyRate) {}

void Rentable::rent(int days)
{
    if(isRented)
    {
        cout << "Item already rented.\n";
    }else
    {
        cout << "Rented for " << days << " days, total: $" << dailyRate * days <<endl;
        isRented = true;
    }
}

void Rentable::returnItem()
{
    if(isRented)
    {
        isRented = false;
        std::cout << "Item returned.\n";
    }else
    {
        std::cout << "Item is not rented.\n";
    }
}

bool Rentable::rented()const 
{
    return isRented;
}

Rentable::~Rentable(){}