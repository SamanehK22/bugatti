#ifndef CAR_H
#define CAR_H
#include "vehicle.h"
#include "sellable.h"

class Car: public Vehicle, public Sellable {
    public:
        Car(string f, string m, string c, int y, int ms, double p);

        void drive() const override;
    
        void display() const override;
    };


#endif