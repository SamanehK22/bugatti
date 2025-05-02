#include "bicycle.h"

Bicycle::Bicycle(string f, string m, string c, int y, int ms, double r): Vehicle(f, m, c, y, ms), Rentable(r) {}
    
void Bicycle::drive() const
{
    for (int i = 0; i < maxSpeed; ++i)
    {
        cout << "pedaling ";
    }
    cout << endl;
}

void Bicycle::display() const
{
    cout << "[Bicycle] " << company << " " << model << ", " << color << ", " << publishDate << ", (Rent $" << dailyRate << "/day)" << endl;
}