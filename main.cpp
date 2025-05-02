#include <iostream>
#include "storeSystem.h"
#include "Car.h"
#include "motor.h"
#include "bicycle.h"

using namespace std;

void printMenu()
{
    cout << endl << "========= Vehicle Store Menu =========" << endl;
    cout << "1. Add Car" << endl;
    cout << "2. Add Motorcycle" << endl;
    cout << "3. Add Bicycle" << endl;
    cout << "4. Show All Items" << endl;
    cout << "5. Sell Item" << endl;
    cout << "6. Rent Item" << endl;
    cout << "7. Return Rented Item" << endl;
    cout << "8. Test Drive Item" << endl;
    cout << "0. Exit" << endl;
    cout << "======================================" << endl;
    cout << "Choose an option: ";
}

int main()
{
    LinkedList store;
    int choice;

    do {
        printMenu();
        cin >> choice;

        switch (choice){
            case 1:
            {
                string brand, model, color;
                int year, speed;
                double price;

                cout << "Enter brand, model, color, year, max speed, price: ";
                cin >> brand >> model >> color >> year >> speed >> price;

                Vehicle* car = new Car(brand, model, color, year, speed, price);
                store.add(car);
                break;
            }
            case 2:
            {
                string brand, model, color;
                int year, speed;
                double price, rentPrice;

                cout << "Enter brand, model, color, year, max speed, sale price, rent price per day: ";
                cin >> brand >> model >> color >> year >> speed >> price >> rentPrice;

                Vehicle* moto = new Motorcycle(brand, model, color, year, speed, price, rentPrice);
                store.add(moto);
                break;
            }
            case 3:
            {
                string brand, model, color;
                int year, speed;
                double rentPrice;

                cout << "Enter brand, model, color, year, max speed, rent price per day: ";
                cin >> brand >> model >> color >> year >> speed >> rentPrice;

                Vehicle* bike = new Bicycle(brand, model, color, year, speed, rentPrice);
                store.add(bike);
                break;
            }
            case 4:
                store.displayAll();
                break;

            case 5:
            {
                int index;
                cout << "Enter item index to sell: ";
                cin >> index;
                Vehicle* v = store.get(index);
                if (v) {
                    if (auto* sellable = dynamic_cast<Sellable*>(v)) {
                        sellable->sell();
                    } else {
                        cout << "This item cannot be sold." << endl;
                    }
                } else cout << "Invalid index." << endl;
                break;
            }

            case 6:
            {
                int index, days;
                cout << "Enter item index to rent and number of days: ";
                cin >> index >> days;
                Vehicle* v = store.get(index);
                if (v) {
                    if (auto* rentable = dynamic_cast<Rentable*>(v)) {
                        rentable->rent(days);
                    } else {
                        cout << "This item cannot be rented." << endl;
                    }
                } else cout << "Invalid index." << endl;
                break;
            }

            case 7:
            {
                int index;
                cout << "Enter item index to return: ";
                cin >> index;
                Vehicle* v = store.get(index);
                if (v) {
                    if (auto* rentable = dynamic_cast<Rentable*>(v)) {
                        rentable->returnItem();
                    } else {
                        cout << "This item cannot be returned." << endl;
                    }
                } else cout << "Invalid index." << endl;
                break;
            }

            case 8:
            {
                int index;
                cout << "Enter item index to test drive: ";
                cin >> index;
                Vehicle* v = store.get(index);
                if (v) v->drive();
                else cout << "Invalid index." << endl;
                break;
            }

            case 0:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid option. Try again." << endl;
        }

    } while (choice != 0);

    return 0;
}
