#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <string>
using namespace std;

class Vehicle{
    protected:
        string company;
        string model;
        string color;
        int publishDate;
        int maxSpeed;
    public:
        Vehicle(string company, string model, string color, int year, int maxSpeed);
        virtual ~Vehicle();
        virtual void drive()const = 0;
        virtual void display()const = 0;
};



#endif