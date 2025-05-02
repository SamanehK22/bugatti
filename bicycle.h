#ifndef BICYLE_H
#define BICYLE_H
#include "vehicle.h"
#include "rentable.h"

class Bicycle : public Vehicle, public Rentable {
    public:
        Bicycle(string f, string m, string c, int y, int ms, double r);    
        void drive() const override;
        void display() const override;
    };

#endif