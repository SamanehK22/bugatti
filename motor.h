#ifndef MOTOR_H
#define MOTOR_H
#include "vehicle.h"
#include "rentable.h"
#include "sellable.h"

class Motorcycle:public Vehicle, public Sellable, public Rentable{
    public:
        Motorcycle(string f, string m, string c, int y, int ms, double p, double r);
        void drive() const override;
        void display() const override;
        bool isAvailableForSale() const;
    };

#endif