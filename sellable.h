#ifndef SELLABLE_H
#define SELLABLE_H
#include "vehicle.h"

class Sellable{
    protected:
        double price;
    public:
        Sellable(double price);
        virtual void sell()const;
        virtual ~Sellable();
};



#endif