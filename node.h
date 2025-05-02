#ifndef NODE_H
#define NODE_H
#include "Vehicle.h"

#include "Vehicle.h"

class Node{
    public:
        Vehicle* item;
        Node* next;
        Node(Vehicle* item);
        ~Node();
};



#endif