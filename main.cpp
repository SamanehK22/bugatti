#include <iostream>
#include "storeSystem.h"
#include "Car.h"
#include "motor.h"
#include "bicycle.h"

using namespace std;

int main()
{
    LinkedList store;

    // Add vehicles
    store.add(new Car("BMW", "M3 GTR", "White and Blue", 2005, 250, 50000));
    store.add(new Motorcycle("Kawasaki", "Ninja", "Green", 2020, 300, 15000, 100));
    store.add(new Bicycle("Trek", "Mountain", "Red", 2021, 20, 30));

    // Display all vehicles
    cout << "Available vehicles:" << endl;
    store.displayAll();

    // Test drive first vehicle
    cout << "\nTesting vehicle 0:" << endl;
    Vehicle* v = store.get(0);
    if (v) v->drive();

    // Attempt to sell first vehicle
    cout << "\nAttempting to sell vehicle 0:" << endl;
    v = store.get(0);
    if(v)
    {
        if(auto* sellable = dynamic_cast<Sellable*>(v))
        {
            sellable->sell();
        }else
        {
            cout << "This vehicle cannot be sold." << endl;
        }
    }

    // Attempt to rent second vehicle
    cout << "\nAttempting to rent vehicle 1:" << endl;
    v = store.get(1);
    if (v) {
        if(auto* rentable = dynamic_cast<Rentable*>(v))
        {
            rentable->rent(5);
        }else
        {
            cout << "This vehicle cannot be rented." << endl;
        }
    }

    return 0;
}
