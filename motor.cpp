#include "motor.h"

Motorcycle::Motorcycle(string f, string m, string c, int y, int ms, double p, double r): Vehicle(f, m, c, y, ms), Sellable(p), Rentable(r) {}

void Motorcycle::drive() const
{
    cout << "Driving from 0 to " << (maxSpeed / 2) << " km/h\n";
}

void Motorcycle::display() const 
{
    cout << "[Motorcycle] " << company << " " << model << ", " << color << ", " << publishDate << ", $" << price << " (Rent $" << dailyRate << "/day)" << endl;
}

bool Motorcycle::isAvailableForSale() const
{
    return !isRented;
}