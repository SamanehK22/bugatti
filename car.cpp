#include "car.h"

Car::Car(string f, string m, string c, int y, int ms, double p): Vehicle(f, m, c, y, ms), Sellable(p){}
    
void Car::drive() const
{
    cout << "Driving from 0 to " << maxSpeed << " km/h\n";
}

void Car::display() const 
{
    cout << "[Car] " << company << " " << model << ", " << color << ", " << publishDate << ", $" << price << endl;
}