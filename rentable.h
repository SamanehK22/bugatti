#ifndef RENTABLE_H
#define RENTABLE_H
#include <iostream>
#include <string>
using namespace std;

class Rentable{
    protected:
        double dailyRate;
        bool isRented = false;
    public:
        Rentable(double dailyRate);
        virtual void rent(int days);
        virtual void returnItem();
        bool rented()const;
        virtual ~Rentable();
};




#endif